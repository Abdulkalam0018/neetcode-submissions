class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
            priority_queue<int>pq1;
            priority_queue<int,vector<int>,greater<int>>pq2;
            for(auto &y:arr)
            {
                if(y<=x)
                {
                    pq1.push(y);
                }
                else
                {
                    pq2.push(y);
                }
            }
            int cnt=0;
            vector<int>ans;
            while(cnt<k)
            {
                if(pq1.empty())
                {
                    ans.push_back(pq2.top());
                    pq2.pop();
                    cnt++;
                    continue;
                }
                if(pq2.empty())
                {
                    ans.push_back(pq1.top());
                    pq1.pop();
                    cnt++;
                    continue;
                }
                auto it1=pq1.top();
                auto it2=pq2.top();
                if(abs(it1-x)<=abs(it2-x))
                {
                    ans.push_back(it1);
                    pq1.pop();
                }
                else
                {
                    ans.push_back(it2);
                    pq2.pop();
                }
                cnt++;
            }
            sort(ans.begin(),ans.end());
            return ans;
    }
};