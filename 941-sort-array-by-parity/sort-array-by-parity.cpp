class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        int n=nums.size();
        int left=0,right=nums.size()-1;
        while(left<right)
        {
            if(nums[left]%2==0)
            {
                left++;
            }
            else if(nums[right]%2!=0)
            {
                right--;
            }
            else
            {
                swap(nums[left],nums[right]);
                left++;
                right--;
            }
        }
        return nums;
    }
};