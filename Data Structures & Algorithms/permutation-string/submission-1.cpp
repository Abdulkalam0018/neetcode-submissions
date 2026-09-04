class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        int n=s2.size();
        if(k>n) return false;
        vector<int>freq1(26,0),freq2(26,0);
        for(auto &x:s1)
        {
            freq1[x-'a']++;
        }
        for(int i=0;i<k;i++)
        {
            freq2[s2[i]-'a']++;
        }
        if(freq1==freq2) return true;

        for(int i=k;i<n;i++)
        {
            freq2[s2[i]-'a']++;
            freq2[s2[i-k]-'a']--;
            if(freq2==freq1) return true;
        }
        return false;
    }
        
};
