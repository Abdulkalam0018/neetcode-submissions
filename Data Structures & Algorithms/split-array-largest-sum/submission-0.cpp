class Solution {
public:
    bool fun(vector<int>&num,int mid,int k)
    {
        int current=0;
        int cnt=1;
        for(auto &x:num)
        {
            if(x>mid) return false;
            if(current+x>mid)
            {
                current=x;
                cnt++;
            }
            else
            {
                current+=x;
            }
        }
        if(cnt<=k) return true;
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        
        int n=nums.size();
        int low=0;
        int high=accumulate(nums.begin(),nums.end(),0LL);
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(fun(nums,mid,k))
            {
                ans=mid;
                high=mid-1;

            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};