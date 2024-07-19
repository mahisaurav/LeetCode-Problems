class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums2.size();
        vector<int> nge(m, -1);
        stack<int> st;
        unordered_map<int, int> nge_map;

        for (int i = 0; i < m; i++) {
            while (!st.empty() && st.top() < nums2[i]) {
                nge_map[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        
        while (!st.empty()) {
            nge_map[st.top()] = -1;
            st.pop();
        }

        vector<int> result;
        for (int num : nums1) {
            result.push_back(nge_map[num]);
        }

        return result;
    }
};



