class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n=s.size();

        for(int i=0;i<n/2;i++)
        {
            //char ex=s[i];
            swap(s[i],s[n-i-1]);
        }
    }
};