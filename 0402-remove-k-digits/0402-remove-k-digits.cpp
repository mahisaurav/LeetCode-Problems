class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        
        for (int i = 0; i < num.size(); ++i) {
  
            while (!st.empty() && k > 0 && st.top() > num[i]) {
                st.pop();
                k--;
            }
            st.push(num[i]);  
        }
        

        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        
        // Construct the result string from the stack
        string res = "";
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }

        reverse(res.begin(), res.end());

        int idx = 0;
        while (idx < res.size() && res[idx] == '0') {
            idx++;
        }
        if (idx == res.size()) {
            return "0";
        }

        return res.substr(idx);
    }
};
