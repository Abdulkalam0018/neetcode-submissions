class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        for(auto &x:nums)
        {
            if(st.find(x)!=st.end())
            {
                return true;
            }
            st.insert({x});
        }
        return false;
    }
};