class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = INT_MIN;
        int curr = 0;
        for (int num : nums) {
            curr += num;
            sum = max(curr, sum);
            curr = max(0, curr);
        }
        return sum;
    }
};
