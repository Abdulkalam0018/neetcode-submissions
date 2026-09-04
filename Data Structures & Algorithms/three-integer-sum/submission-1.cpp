class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // -4 -1 -1 0 1 2
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n-2;i++)
        {
            if(i!=0 && nums[i]==nums[i-1]) continue;
            int l=i+1;
            int h=n-1;
            int tar=-1*nums[i];
            //cout<<tar<<endl;

            while(l<h)
            {
                if (nums[l] + nums[h] == tar) {
                ans.push_back({nums[i],nums[l],nums[h]});
                // move l and h, skipping duplicates
                while (l < h && nums[l]==nums[l+1]) l++;
                while (l < h && nums[h]==nums[h-1]) h--;
                l++;
                h--;
            }
            else if (nums[l] + nums[h] < tar) {
                l++;
            }
            else {
                h--;
            }

            }


        }
        return ans;
    }
};
