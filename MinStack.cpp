class MinStack {
    stack<int> s;
    stack<int> minStack;

public:
    void push(int x) {
        s.push(x);
        // Push to minStack if it's empty or x is smaller than or equal to current min
        if (minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        }
    }

    void pop() {
        if (s.empty()) return;
        // Also pop from minStack if top elements match
        if (s.top() == minStack.top()) {
            minStack.pop();
        }
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return minStack.top();
    }
};
