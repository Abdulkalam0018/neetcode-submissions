class Solution {
public:
    int characterReplacement(string s, int k) {

        int n=s.size();
        int j=0;
        vector<int>freq(26,0);
        int mx=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            freq[s[i]-'A']++;
            mx=max(mx,freq[s[i]-'A']);
            int wind=i-j+1;
            if(wind-mx>k)
            {
                freq[s[j]-'A']--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
        
    }
};
