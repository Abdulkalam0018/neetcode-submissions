class Solution {
public:
    void fun(vector<string>&ans,stack<char>st,int n,int i,int j)
    {
        //()((())
        if(i==n && j==n)
        {
            string s="";
            while(!st.empty())
            {
                s+=st.top();
                st.pop();
            }
            reverse(s.begin(),s.end());
            ans.push_back(s);
            return ;
        }
        if(st.empty())
        {
            st.push('(');
            fun(ans,st,n,i+1,j);
        }
        else
        {
            if(i>j)
            {
                st.push(')');
                fun(ans,st,n,i,j+1);
                st.pop();
                if(i<n)
                {
                    st.push('(');
                    fun(ans,st,n,i+1,j);
                }

            }
            else if(i<n)
            {

                st.push('(');
                fun(ans,st,n,i+1,j);
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        stack<char>st;
        vector<string>ans;
        int a=2*n;
        fun(ans,st,n,0,0);
        return ans;
    }
};
