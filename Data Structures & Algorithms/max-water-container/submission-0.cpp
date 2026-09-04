class Solution {
public:
    int maxArea(vector<int>& h) {
        
        int n=h.size();
        int i=0,j=n-1;
        int mx=0;

        while(i<j)
        {
            int ans=(j-i)*(min(h[i],h[j]));
            if(h[i]<h[j])
            {
                i++;
            }
            else 
            {
                j--;
            }
            mx=max(mx,ans);
        }
        return mx;
    }
};
