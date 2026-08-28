class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX,left=0,right=0,sum=0;
        for(right=0;right<nums.size();right++)
        {
            sum = sum+nums[right];
            while(sum>=target)
            {
                ans=min(ans,right-left+1);
                sum = sum-nums[left];
                left++;
            }
        }
        return ans==INT_MAX?0:ans;
    }
};