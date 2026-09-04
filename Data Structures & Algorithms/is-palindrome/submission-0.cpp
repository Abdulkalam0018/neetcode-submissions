class Solution {
public:
    bool isPalindrome(string s) {
        
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(!isalnum(s[i])  ){
                i++;
                continue;
            } 
            if(!isalnum(s[j]))
            {
                j--;
                continue;
            }
            char ch1=tolower(s[i]);
            char ch2=tolower(s[j]);
            if(ch1!=ch2) return false;
            // cout<<ch1<<" "<<ch2<<endl;
            i++;
            j--;
        }
        return true;
    }
};
