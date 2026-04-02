class MinStack {
public:
    stack<int> minstack;
    stack<int> s;
    MinStack() {
    }
    
    void push(int val) {
        s.push(val);
        if (minstack.empty())
            minstack.push(val);
        else
            minstack.push(min(val, minstack.top()));
    }
    
    void pop() {
        s.pop();
        minstack.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};
