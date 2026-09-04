class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n=nums.size();

        int low=0;
        int high=n-1;
        for(int i=0;i<n;i++)
        {
            while(high>i && nums[i]==2)
            {
                swap(nums[i],nums[high]);
                high--;
            }
            while(low<i && nums[i]==0)
            {
                swap(nums[i],nums[low]);
                low++;
            }
        }
    }
};