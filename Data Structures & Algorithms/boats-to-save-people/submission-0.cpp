class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(),people.end());
        map<int,int>mp;
        set<int>st;
        for(auto &x:people)
        {
            mp[x]++;
            st.insert(x);
        }
        int n=people.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(st.size()==0) break;
            if(st.count(people[i]))
            {
                mp[people[i]]--;
                 if(mp[people[i]]==0)
                 {
                    st.erase(people[i]);
                 }
                int a=limit-people[i];
                if(a==0) cnt++;
                else
                {
                    auto it=st.lower_bound(a);
                    if(*it==a)
                    {
                        mp[*it]--;
                        if(mp[*it]==0)
                        {
                            st.erase(*it);
                        }
                    }
                    else
                    {
                        if(it==st.begin())
                        {
                            cnt++;
                            continue;
                        }
                        it--;
                        mp[*it]--;
                        if(mp[*it]==0)
                        {
                            st.erase(*it);
                        }
                    }
                    cnt++;
                }
            }
        }
        return cnt;


    }
};