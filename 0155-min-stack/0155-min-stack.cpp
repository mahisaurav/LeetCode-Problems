class MinStack {
public:
    MinStack() {
     
    }
    stack<long> st;   
      long mini = INT_MAX;
    void push(long val) {
        if(st.empty()){
            mini = val;
            st.push(val);
        }
        else{
            if(val>mini){
                st.push(val);
            }
            else{
                st.push((2*val)-mini);
                mini = val;
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;
        else{
            long x = st.top();
            st.pop();
            if(x < mini){
                mini = (2*mini)-x;
            }
        }
    }
    
    int top() {
        if(st.empty()) return -1;
        long x = st.top();
        if(mini<x) return x;
        else{
            return mini;
        }
    }
    
    int getMin() {
        return mini;
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