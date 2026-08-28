class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        long long windowsum = 0;
        for(int i=0 ;i<k;i++)
        {
            windowsum=windowsum + nums[i];
        }
        long long maxsum = windowsum;
        for(int i=k;i<n;i++)
        {
            windowsum= windowsum +nums[i];
            windowsum = windowsum -  nums[i-k];
            maxsum= max(maxsum,windowsum);
        }
        return (double)maxsum/k;
    }
};