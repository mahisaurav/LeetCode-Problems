class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n, -1);
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < n; ++j) {
                int ind = (i + j) % n;
                if (nums[ind] > nums[i]) {
                    nge[i] = nums[ind];
                    break;
                }
            }
        }

        return nge;
    }
};
