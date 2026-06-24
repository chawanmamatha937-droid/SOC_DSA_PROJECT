class Solution {
public:
    int sumAfterDivision(vector<int>& nums, int divisor) {
        int sum = 0;
        for (int num : nums) {
            sum += (num + divisor - 1) / divisor;
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = 0;
        for (int num : nums) {
            high = max(high, num);
        }
        
        int result = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (sumAfterDivision(nums, mid) <= threshold) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return result;
    }
};