class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n+1,0);
        dp[0]=1;
        for(int i=1;i<=n;i++)
        {
            if(s[i-1]!='0')
            dp[i]=dp[i-1];
            if(i!=1)
            {
                string r="";
                r+=s[i-2];
                r+=s[i-1];
                int a=stoi(r);
                if(a>=10 && a<=26)
                {
                    dp[i]+=dp[i-2];
                }
            }
        }
        return dp[n];
    }
};
