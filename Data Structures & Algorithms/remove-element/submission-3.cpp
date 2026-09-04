class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        

        int n=nums.size();
        int j=n-1;
        int i=0;
        while(i<j)
        {
            while(j>=i && nums[i]==val)
            {
                swap(nums[i],nums[j]);
                j--;
            }
            i++;
        }
        //cout<<j<<endl;
        for(auto &x:nums)
        {
            cout<<x<<" ";
        }
        for(int k=0;k<n;k++)
        {
            if(val==nums[k]) return k;
        }
        return n;
    }
};