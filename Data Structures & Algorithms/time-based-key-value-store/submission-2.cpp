class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string,map<int,string>>mp;
    void set(string key, string value, int time) {
        int p=1000-time;
        mp[key].insert({p,value});
    }
    
    string get(string key, int t) {
        int p=1000-t;
        auto it=mp[key].lower_bound(p);
        //cout<<*it<<endl;
        return it==mp[key].end()?"":it->second;
    }
};
