class Solution {
public:
    bool canSplit(vector<int>& nums, int maxSum, int k) {
        int subarrayCount = 1;
        int currentSum = 0;
        
        for (int num : nums) {
            if (currentSum + num > maxSum) {
                subarrayCount++;
                currentSum = num;
            } else {
                currentSum += num;
            }
        }
        
        return subarrayCount <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        
        for (int num : nums) {
            low = max(low, num);
            high += num;
        }
        
        int result = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canSplit(nums, mid, k)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return result;
    }
};