class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> stk;
        int maxArea = 0;
        
        for (int i = 0; i <= n; i++) {
            int currentHeight = (i == n) ? 0 : heights[i];
            
            while (!stk.empty() && heights[stk.top()] > currentHeight) {
                int height = heights[stk.top()];
                stk.pop();
                
                int width = stk.empty() ? i : i - stk.top() - 1;
                maxArea = max(maxArea, height * width);
            }
            stk.push(i);
        }
        
        return maxArea;
    }
};