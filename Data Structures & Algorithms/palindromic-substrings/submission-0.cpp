class Solution {
public:
    int countSubstrings(string s){
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        int start=0;
        for(int i=1;i<=n;i++)
        {
            dp[i][i]=1;
        }
        int a=1;
        for(int i=1;i<n;i++)
        {
            if(s[i-1]==s[i])
            {
                start=i-1;
                a=2;
                dp[i][i+1]=1;
            }
        }
        for(int len=3;len<=n;len++)
        {
            for(int i=0;i<=n-len;i++)
            {
                int j=i+len-1;
                int x=i+1;
                int y=j+1;
                if(dp[x+1][y-1] && s[i]==s[j])
                {
                    start=i;
                    a=len;
                    dp[x][y]=1;
                }
            }
        }
        int ans=0;
        for(auto &x:dp)
        {
            for(auto &y:x)
            {
                if(y) ans++;
            }
        }
        return ans;

    }
};
