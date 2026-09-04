class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int l=0;
        for(auto &x:st)
        {
            if(st.count(x-1))
            {
                continue;
            }
            else
            {
                int len=1;
                while(st.count(x+len))
                {
                    len++;
                }
                l=max(l,len);
            }
        }
        return l;
        
    }
};
