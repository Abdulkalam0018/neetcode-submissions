class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int j=0;
        vector<int>v1(27,0),v2(27,0);

        for(auto &x:s1)
        {
            v1[x-'a']++;
        }

        int m=s1.size();
        int n=s2.size();
        if(m>n) return false;

        for(int i=0;i<n;i++)
        {
            v2[s2[i]-'a']++;
            if(i-j+1>m)
            {
                v2[s2[j]-'a']--;
                j++;
            }
            if(i-j+1==m)
            {
                if(v1==v2) return true;
            }
        }
        return false;
    }
};
