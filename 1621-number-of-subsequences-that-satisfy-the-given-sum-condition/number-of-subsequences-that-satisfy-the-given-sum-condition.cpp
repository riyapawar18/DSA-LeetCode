class Solution {
public:
    int numSubseq(std::vector<int>& nums, int target) {
        int n = nums.size();
        long long MOD = 1e9 + 7;
        
        std::sort(nums.begin(), nums.end());
        
        std::vector<long long> powerOfTwo(n, 1);
        for (int i = 1; i < n; i++) {
            powerOfTwo[i] = (powerOfTwo[i - 1] * 2) % MOD;
        }
        
        int left = 0;
        int right = n - 1;
        long long count = 0;
        
        while (left <= right) {
            if (nums[left] + nums[right] <= target) {
                count = (count + powerOfTwo[right - left]) % MOD;
                left++;
            } else {
                right--;
            }
        }
        
        return count;
    }
};