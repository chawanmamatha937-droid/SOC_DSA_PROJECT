class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
         sort(nums.begin(), nums.end());
        
        int start = 0;
        int max_freq = 0;
        long long current_sum = 0;
       for (int end = 0; end < nums.size(); end++) {
            current_sum += nums[end];
           long long length = end - start + 1;
            long long needed_operations = (length * nums[end]) - current_sum;
             while (needed_operations > k) {
                current_sum -= nums[start];
                start++;
                 length = end - start + 1;
                needed_operations = (length * nums[end]) - current_sum;
            }
            if (length > max_freq) {
                max_freq = length;
            }
        }
        
        return max_freq;
    }
};
