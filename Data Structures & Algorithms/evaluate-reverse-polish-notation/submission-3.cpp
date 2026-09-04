class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto &x:tokens)
        {
            if(x.size()==1 && (x=="+" ||x=="-" ||x=="*" ||x=="/"))
            {
                int a=st.top();st.pop();
                int b=st.top();st.pop();
                if(x=="+") st.push(a+b);
                if(x=="-") st.push(b-a);
                if(x=="/") st.push(b/a);
                if(x=="*") st.push(b*a);
            }
            else
            {
                st.push(stoi(x));
            }
        }
        return st.top();
    }
};
