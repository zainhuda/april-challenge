class Solution {
public:
    // can only count x when x+1 is present in the arr
    int countElements(vector<int>& arr) {
        set<int> store;
        for (int a : arr) {
            store.insert(a);
        }
        int res = 0;
        for (int a : arr) {
            if (store.count(a+1) == 1) {
                res++;
            }
        }
        return res;
    }
};
