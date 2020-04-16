class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0, right = 1; 
        while (left < nums.size() && right < nums.size()) {
            if (nums[right] != 0 && nums[left] == 0) {
                nums[left] = nums[right];
                nums[right] = 0;
                while (left < nums.size() && nums[left] != 0) {
                    left++;
                }
            }
            if (nums[right] == 0 && nums[left] != 0) {
                left = right;
            }
            right++;
        }
    }
};
