class Solution {
public:
    int fun(int i,vector<int>& nums,int n,vector<int>v){

        if(i==n)
        {
            return v.size();
        }
        int l1=fun(i+1,nums,n,v);
        int l2;
        if(v.size()>=1)
        {
            int a=v.back();
            if(a<nums[i])
            v.push_back(nums[i]);
            l2=fun(i+1,nums,n,v);
        }
        else
        {
            v.push_back(nums[i]);
            l2=fun(i+1,nums,n,v);
        }
        return max(l1,l2);
        
    }
    int lengthOfLIS(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        vector<int>v;
        int ans=fun(i,nums,n,v);
        return ans;
    }
};
