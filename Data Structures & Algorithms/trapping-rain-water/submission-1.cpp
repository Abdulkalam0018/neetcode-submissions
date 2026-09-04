class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
        vector<int>pre(n+1,0),suf(n+1,0);
        int ans=0;
        //pre[n-1]=h[n-1];
        for(int i=n-2;i>=0;i--)
        {
            pre[i]=max(pre[i+1],h[i+1]);
        }
        for(int i=1;i<n;i++)
        {
            suf[i]=max(suf[i-1],h[i-1]);
        }
        for(auto &x:pre) cout<<x<<" ";
        cout<<endl;
        for(auto &x:suf) cout<<x<<" ";
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            int a=min(pre[i],suf[i]);

            if(a>h[i])
            ans+=a-h[i];
        }
        return ans;

    }
};
