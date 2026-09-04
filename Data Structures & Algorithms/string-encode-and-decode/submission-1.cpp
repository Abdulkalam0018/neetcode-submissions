class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        int i=1;
        int n=strs.size();
        for(auto &x:strs)
        {
            s+=to_string(x.size())+"#"+x;
        }
        cout<<s<<endl;
        return s;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        int n=s.size();
        while(i<n)
        {
            int j=i;
            while(s[j]!='#') j++;
            string g=s.substr(i,j-i);
            int a=stoi(g);
            i=1+j;
            string ab=s.substr(i,a);
            ans.push_back(ab);
            i+=a;
        }
        return ans;
    }
};
