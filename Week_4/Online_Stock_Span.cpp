class StockSpanner {
private:
    stack<pair<int, int>> stk;

public:
    StockSpanner() {}
    
    int next(int price) {
        int currentSpan = 1;
        
        while (!stk.empty() && stk.top().first <= price) {
            currentSpan += stk.top().second;
            stk.pop();
        }
        
        stk.push({price, currentSpan});
        return currentSpan;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */