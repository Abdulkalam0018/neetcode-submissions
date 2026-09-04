#define all(x) x.begin(),x.end()
class Solution {

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<int>>mp;
        int i=0;
        for(auto &x:strs)
        {
            string k=x;
            sort(all(k));
            mp[k].push_back(i);
            i++;
        }
        for(auto &x:mp)
        {
            vector<string>s;
            for(auto &y:x.second)
            {
                s.push_back(strs[y]);
            }
            ans.push_back(s);
        }
        return ans;
    }
};
