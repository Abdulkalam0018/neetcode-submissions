class Solution {
public:
    #define pp pair<int,int>
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>st;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int a=target-nums[i];
            if(st.count(a))
            {
                return {st[a],i};
            }
            st.insert({nums[i],i});
        }
        return {};
    }
};
