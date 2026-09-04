class Solution {
public:
    int findMin(vector<int> &nums) {
        int low=0;
        int n=nums.size();
        int high=n-1;
        int mina=nums[low];
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[low]<=nums[mid])
            {
                mina=min(mina,nums[low]);
                low=mid+1;
            }
            else
            {
                mina=min(mina,nums[mid]);
                high=mid-1;
            }
        }
        return mina;
    }
};
