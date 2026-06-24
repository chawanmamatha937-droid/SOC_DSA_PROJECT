class MinStack {
private:
    stack<int> mainStk;
    stack<int> minStk;  

public:
    MinStack() {}
    void push(int val) {
        mainStk.push(val);
        if (minStk.empty() || val <= minStk.top()) {
            minStk.push(val);
        }
    }
     void pop() {
        if (mainStk.top() == minStk.top()) {
            minStk.pop();
        }
        mainStk.pop();
    }
    
    int top() {
        return mainStk.top();
    }
     int getMin() {
        return minStk.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */