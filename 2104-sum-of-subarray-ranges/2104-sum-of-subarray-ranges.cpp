class Solution {
public:
    long long subArrayRanges(std::vector<int>& nums) {
        long long sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            long long largest = nums[i];
            long long smallest = nums[i];
            for(int j = i + 1; j < nums.size(); j++) {
                largest = std::max(largest, (long long)nums[j]);
                smallest = std::min(smallest, (long long)nums[j]);
                sum = sum + (largest - smallest);
            }
        }
        return sum;
    }
};