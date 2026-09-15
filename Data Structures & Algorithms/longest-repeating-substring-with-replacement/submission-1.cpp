class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int n=s.size();
        int j=0;
        int ans=1;
        if(n==1) return ans;
        vector<int>freq(27,0);

        int max_freq=0;
        for(int i=0;i<n;i++)
        {
            freq[s[i]-'A']++;
            if(freq[s[i]-'A']>max_freq)
            {
                max_freq=freq[s[i]-'A'];
            }
            int dif=i-j+1-max_freq;
            while(j<i && dif>k)
            {
                freq[s[j]-'A']--;
                j++;
                dif=i-j+1-max_freq;
            }
            ans=max(ans,i-j+1);
        }
        return ans;

    }
};
