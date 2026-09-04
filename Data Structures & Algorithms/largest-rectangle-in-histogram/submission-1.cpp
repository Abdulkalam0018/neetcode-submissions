#define ii pair<int,int>
#define ff first
#define ss second
class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<ii>st;
        int n=h.size();
        int max_a=0;
        int s;
        for(int i=0;i<n;i++)
        {
            s=i;
            while(!st.empty() && st.top().ff>h[i] )
            {
                int wid=i-st.top().ss;
                max_a=max(max_a,wid*st.top().ff);
                
                s=st.top().ss;
                st.pop();
            }
            st.push({h[i],s});
        }
        s=n;
        while(!st.empty())
        {
            int wid=s-st.top().ss;
            max_a=max(max_a,wid*st.top().ff);
            st.pop();
        }
        return max_a;
    }
};
