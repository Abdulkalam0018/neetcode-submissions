class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int ans=0;
        int n=prices.size();
        int current=prices[0];
        for(int i=0;i<n;i++)
        {
            if(prices[i]>current)
            {
                ans+=prices[i]-current;
                current=prices[i];
            }
            else
            {
                current=prices[i];
            }
        }
        return ans;
    }
};