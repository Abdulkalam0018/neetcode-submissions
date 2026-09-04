class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        string current="";
        for(auto &x:strs)
        {
            int n=ans.size();
            int m=x.size();

            for(int i=0;i<min(n,m);i++)
            {
                if(x[i]==ans[i])
                {
                    current+=x[i];
                }
                else break;
            }
            ans=current;
            current="";

        }
        return ans;
    }
};