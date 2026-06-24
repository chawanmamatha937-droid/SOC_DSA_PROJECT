class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int, int> nextGreater;
        stack<int> stk;
         for (int i = nums2.size() - 1; i >= 0; i--) {
            int num = nums2[i];
            
            while (!stk.empty() && stk.top() <= num) {
                stk.pop();
            }
            nextGreater[num] = stk.empty() ? -1 : stk.top();
             stk.push(num);
        }
         vector<int> ans;
        ans.reserve(nums1.size());
        for (int num : nums1) {
            ans.push_back(nextGreater[num]);
        }
        
        return ans;
    }
};