class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        // sort(trips.begin(),trips.end(),[](const vector<int>a,const vector<int>b)
        // {
        //     return a[1]<b[1];
        // });

        map<int,int>mp;

        for(auto &x:trips)
        {
            mp[x[1]]+=x[0];
            mp[x[2]]-=x[0];
        }
        int current=0;
        for(auto &it:mp)
        {
            current+=it.second;
            if(current>capacity) return false;
        }
        return true;

    }
};