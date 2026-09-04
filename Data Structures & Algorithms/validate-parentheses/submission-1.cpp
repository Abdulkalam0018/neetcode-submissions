class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int i=0;
        int n=s.size();
        while(i<n)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                else
                {
                    char a=st.top();
                    if(a=='[' && s[i]!=']')
                    {
                        return false;
                    }
                    if(a=='(' && s[i]!=')') return false;
                    if(a=='{' && s[i]!='}') return false;
                }
                st.pop();
            }
            i++;
        }
        if(!st.empty()) return false;
        return true;
    }
};
