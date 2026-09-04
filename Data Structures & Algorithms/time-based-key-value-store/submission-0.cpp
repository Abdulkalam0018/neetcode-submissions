class TimeMap {
public:
    TimeMap() {
        
    }
    map<string,multiset<int>>mp;
    map<int,string>mp1;
    void set(string key, string value, int time) {
        int p=1000-time;
        mp[key].insert({p});
        mp1[p]=value;
    }
    
    string get(string key, int t) {
        int p=1000-t;
        auto it=lower_bound(mp[key].begin(),mp[key].end(),p);
        cout<<*it<<endl;
        return mp1[*it];
    }
};
