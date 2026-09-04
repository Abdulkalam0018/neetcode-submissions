class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int>st;
        vector<int>ans;
        ans.push_back(0);
        int n=t.size();
        st.push(n-1);
        for(int i=n-2;i>=0;i--)
        {
            int a=st.top();
            if(t[a]>t[i])
            {
                ans.push_back(a-i);
                st.push(i);
            }
            else
            {
                while(!st.empty() && t[a]<=t[i])
                {
                    cout<<t[a]<<endl;
                    st.pop();
                    if(!st.empty())
                    a=st.top();
                }
                if(!st.empty())
                {
                    int d=st.top();
                    ans.push_back(d-i);
                }
                else
                {
                    ans.push_back(0);
                }
                st.push(i);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
