class Solution {
public:
    double maxProduct(vector<int>& nums) {
        double pre = 1;
        double suf = 1;
        double maxi = INT_MIN;
        double n = nums.size();
        for(int i = 0;i<nums.size();i++){
            if(suf == 0) suf = 1;
            if(pre == 0) pre = 1;
            pre = pre*nums[i];
            suf = suf*nums[n-i-1];
            maxi = max(maxi,max(pre,suf));
        }
        return maxi;
    }
};