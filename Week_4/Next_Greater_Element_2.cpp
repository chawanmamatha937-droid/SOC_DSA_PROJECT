class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> stk;  for (int i = 2 * n - 1; i >= 0; i--) {
            int currentIdx = i % n;
              while (!stk.empty() && nums[stk.top()] <= nums[currentIdx]) {
                stk.pop();
            }
             if (i < n) {
                if (!stk.empty()) {
                    ans[currentIdx] = nums[stk.top()];
                }
            }
            
             stk.push(currentIdx);
        }
        
        return ans;
    }
};