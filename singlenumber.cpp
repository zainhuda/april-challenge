class Solution {
    # XOR: number with itself is 0, with 0 its the number, order doesn't matter its commutative
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for (int num : nums) {
            x ^= num;
        }
        return x;
    }
};
