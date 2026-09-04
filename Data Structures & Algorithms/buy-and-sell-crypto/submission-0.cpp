class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int i=1;
        int mx=0;
        int mn=prices[0];
        while(i<n)
        {
            if(mn<prices[i])
            {
                mx=max(mx,prices[i]-mn);
            }
            else
            {
                mn=prices[i];

            }
            i++;
        }
        return mx;
    }
};
