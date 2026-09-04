#define all(x) x.begin(),x.end()
class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        sort(all(p));
        int l=1;
        int hi=*max_element(all(p));
        int ans=hi;
        while(l<=hi)
        {
            int mid=(hi+l)/2;
            int sum=0;
            for(auto &x:p)
            {
                sum+=(x+mid-1)/mid;
            }
            if(sum<=h)
            {
                ans=mid;
                hi=mid-1;
            }
            else
            {
                l=mid+1;
            }

        }
        return ans;

    }
};
