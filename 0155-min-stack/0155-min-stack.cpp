class MinStack {
public:

    stack< pair<int,int> > st;

    MinStack() {}
    
    void push(int value) {
        int mn = st.empty() ? value : min(value,st.top().second);
        
        st.emplace(value,mn);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
