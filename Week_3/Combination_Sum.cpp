class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> currentCombination;
         sort(candidates.begin(), candidates.end());
        
        backtrack(result, currentCombination, candidates, target, 0);
        return result;
    }

private:
    void backtrack(vector<vector<int>>& result, vector<int>& current, vector<int>& candidates, int target, int start) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
 for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > target) {
                break;
            }
current.push_back(candidates[i]);
  backtrack(result, current, candidates, target - candidates[i], i);

              current.pop_back();
        }
    }
};