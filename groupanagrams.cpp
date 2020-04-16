class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // canonical form, choosing to sort the the word 
        unordered_map<string, vector<string>> store;
        for (string word : strs) {
            string sorted = word;
            sort(sorted.begin(), sorted.end());
            store[sorted].push_back(word);
        }
        vector<vector<string>> res;
        for (pair<string, vector<string>> element : store) {
            res.push_back(element.second);
        }
        return res;
    }
};
