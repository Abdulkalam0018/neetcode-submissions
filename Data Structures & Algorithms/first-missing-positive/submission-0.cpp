class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0) continue;
            if(nums[i]>n) continue;
            while(nums[i]<=n && nums[i]>0 && nums[i]!=i+1 && nums[nums[i]-1]!=nums[i])
            {
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(auto &x:nums) cout<<x<<" ";
        int ans=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=ans) return ans;
            ans++;
        }
        return ans;
    }
};