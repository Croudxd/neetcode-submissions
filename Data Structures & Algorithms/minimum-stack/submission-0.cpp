class MinStack {
    private:
        stack<int> st;
        stack<int> min;

    public:
        MinStack() {
            
        }
        
        void push(int val) {
            st.push(val);
            if (min.empty() || min.top() >= val) min.push(val);
        }
        
        void pop() {
            if (!st.empty() && !min.empty() && st.top() == min.top()) min.pop();
            st.pop();
        }
        
        int top() {
                return st.top();
        }
        
        int getMin() {
                return min.top();
        }
};
