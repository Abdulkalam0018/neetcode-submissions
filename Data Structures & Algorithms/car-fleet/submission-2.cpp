#define ii pair<double,double>
class Solution {
public:

    int carFleet(int target, vector<int>& p, vector<int>& s) {
        vector<ii>v;
        int n=p.size();
        for(int i=0;i<n;i++){
            v.push_back({p[i],s[i]});
        }
        sort(v.rbegin(),v.rend());
        // for(auto &x:v)
        // {
        //     cout<<x.first<<" ";
        // }
        int cnt=1;
        double t=(double)(target-v[0].first)/v[0].second;
        //cout<<t<<endl;
        double a=v[0].first;
        double b=v[0].second;
        for(int i=1;i<n;i++)
        {
            double c=v[i].first;
            double d=v[i].second;
            cout<<c<<" "<<d<<endl;
            if(b==d && c==a){
                continue;
            }
            else if(b<d)
            {
                double t1=(double)(a-c)/(d-b);
                //cout<<t1<<t<<endl;
                if(t1>t){
                    a=c;
                    b=d;
                    t=(double)(target-c)/(d);
                    cnt++;
                }
            }
            else
            {
                a=c;
                b=d;
                t=(double)(target-c)/(d);
                //cout<<t<<endl;
                cnt++;
            }
        }
        return cnt;
        


    }
};
