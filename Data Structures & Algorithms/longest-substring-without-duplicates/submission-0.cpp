class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        map<char,int>mp;
        int n=s.size();
        int i=-1,j=0;
        int mx=0;
        while(j<n)
        {
            if(mp.find(s[j])==mp.end() || mp[s[j]]==0)
            {
                mx=max(mx,j-i);
                mp[s[j]]++;
                j++;
            }
            else
            {
                i++;
                mp[s[i]]--;
            }

        }
        return mx;
    }
};
