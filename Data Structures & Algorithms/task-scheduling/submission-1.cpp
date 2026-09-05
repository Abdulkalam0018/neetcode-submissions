class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> mp;
        for (char task : tasks) {
            mp[task]++;
        }
        priority_queue<int> pq; 
        for (auto& x : mp) {
            pq.push(x.second);
        }

        int ans = 0;
        while (!pq.empty()) {
            vector<int> temp; 
            int time = 0;
        
            for (int i = 0; i <= n; i++) {
                if (!pq.empty()) {
                    temp.push_back(pq.top() - 1);
                    pq.pop();
                    time++;
                }
            }
            for (int count : temp) {
                if (count > 0) {
                    pq.push(count);
                }
            }
            ans += pq.empty() ? time : n + 1;
        }
        return ans;
    }
};