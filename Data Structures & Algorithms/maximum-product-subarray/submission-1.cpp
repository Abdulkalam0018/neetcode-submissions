class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=INT_MIN;
        int mina=1;
        int maxa=1;
        for(auto &x:nums)
        {

            int a=mina;
            mina=min(1*x,min(x*maxa,mina*x));
            maxa=max(1*x,max(maxa*x,a*x));
            ans=max(ans,maxa);
            cout<<ans<<" ";
        }
        return ans;
    }
};
