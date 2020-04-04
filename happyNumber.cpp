class Solution {
    int sumFunc(int num) {
        int sum = 0;
        while (num) {
            int digit = num % 10;
            num /= 10;
            sum += digit * digit;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> visited;
        while (true) {
            if (n == 1) return true;
            n = sumFunc(n);
            if (visited.count(n) == 1) return false;
            visited.insert(n);
        }
    }
};
