class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>pre(n+1,0);
        for(int i=1;i<=n;i++)
        {
            pre[i]=1+pre[i&(i-1)];
        }
        return pre;
    }
};
