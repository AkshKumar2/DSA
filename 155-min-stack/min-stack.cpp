class MinStack {
public:
    MinStack() {
      
    }
    vector<int> minStack;
    vector<int> mini;
    
    void push(int value) {
        if(mini.empty() || value<=mini.back())mini.push_back(value);
        minStack.push_back(value);
    }
    
    void pop() {
        if(mini.back()==minStack.back())mini.pop_back();
        minStack.pop_back();
    }
    
    int top() {
        return minStack.back();
    }
    
    int getMin() {
        return mini.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */