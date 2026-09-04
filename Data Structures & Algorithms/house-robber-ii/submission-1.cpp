class Solution {


public:
        int rob1(vector<int>& nums) {
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
            return dp[n];
        }

    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>p1(nums.begin(),nums.end()-1),p2(nums.begin()+1,nums.end());
        int ans=max(rob1(p1),rob1(p2));
        return n==1?nums[0]:ans;
    }
};
