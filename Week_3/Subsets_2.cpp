class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> currentSubset;
        sort(nums.begin(), nums.end());
        
        backtrack(result, currentSubset, nums, 0);
        return result;
    }

private:
    void backtrack(vector<vector<int>>& result, vector<int>& current, const vector<int>& nums, int start) {
         result.push_back(current);
        
        for (int i = start; i < nums.size(); i++) {
           if (i > start && nums[i] == nums[i - 1]) {
                continue;
            }
            current.push_back(nums[i]);
             backtrack(result, current, nums, i + 1);
             current.pop_back();
        }
    }
};