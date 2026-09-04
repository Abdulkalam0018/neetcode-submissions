class Solution {
public:
    bool wordBreak(string s, vector<string>& w) {
        int n=s.size();
        vector<int>dp(n+2,0);
        dp[n+1]=1;
        for(int i=n;i>=1;i--)
        {
            for(auto &x:w)
            {
                int a=x.size();
                if(n-i+1>=a)
                {
                    string p=s.substr(i-1,a);
                    //cout<<p<<" "<<x<<" "<<i<<endl;
                    if(p==x && dp[i+a])
                    {
                        dp[i]=1;
                    }
                }
            }
        }
        // for(auto &x:dp)
        // {
        //     cout<<x<<" ";
        // }
        return dp[1];
    }
};
