class Solution {
public:
    int coinChange(vector<int>& c, int a) {
        vector<int>dp(a+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=a;i++)
        {
            for(auto &x:c)
            {
                if(i-x>=0)
                {
                    if(dp[i-x]!=INT_MAX)
                    dp[i]=min(dp[i],1+dp[i-x]);
                }
            }
        }
        for(auto &x:dp)
        {
            cout<<x<<" ";
        }
        if(dp[a]==INT_MAX) return -1;
        return dp[a];
    }
};
