class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size(),i=0;
        int j=1;
        while(i<n&&j<n)
        {
            if(nums[i]%2!=0)
            {
                while(j < n && nums[j] % 2 != 0) {
                    j += 2;
                }
                swap(nums[i],nums[j]);
            }
            i+=2;
        }
        return nums;
    }
};