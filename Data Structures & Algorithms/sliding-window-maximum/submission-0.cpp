class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) return {};
        map<int,int>mp;
        for(int i=0;i<k;i++)
        {
            mp[nums[i]]++;
        }

        int i=0,j=k;
        vector<int>ans;
        while(j<=n)
        {
            auto it=mp.end();
            it--;
            while(it->second==0)
            {
                it--;
            }
            ans.push_back(it->first);
            mp[nums[i]]--;
            i++;
            mp[nums[j]]++;
            j++;

        }
        return ans;

    }
};
