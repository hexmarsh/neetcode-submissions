class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;

        for (const string& str : strs) {
            std::string sorted(str);
            std::sort(sorted.begin(), sorted.end());
            anagrams[sorted].push_back(str);
        }

        std::vector<std::vector<string>> result;
        result.reserve(anagrams.size());
        for (const auto& [k, v] : anagrams) {
            result.push_back(v);
        }

        return result;
    }
};
