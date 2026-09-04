class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int>dq;
        vector<int>ans;
        
        for(int i=0;i<n;i++)
        {
            // out of range
            if(!dq.empty() && dq.front()==i-k)
            {
                dq.pop_front();
            }
            //maintain decreasing order

            while(!dq.empty() && nums[dq.back()]<=nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);

            // answer

            if(i>=k-1)
            {
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
};
