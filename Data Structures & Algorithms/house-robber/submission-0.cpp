class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,0);
        for(int i=1;i<=n;i++)
        {
            if(i==1)
            {
                dp[i]=nums[i-1];
            }
            else
            {
                dp[i]=max(nums[i-1]+dp[i-2],dp[i-1]);
            }
        }
        // for(auto &x:dp)
        // {
        //     cout<<x<<" ";
        // }
        return dp[n];
    }
};
