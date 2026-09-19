class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }

        vector<pair<int, int>> sorted_pairs;
        sorted_pairs.reserve(counts.size());
        for (const auto& [k, v] : counts) {
            sorted_pairs.push_back({v, k});
        }
        std::sort(sorted_pairs.begin(), sorted_pairs.end(), std::greater<>());

        vector<int> result;
        result.reserve(k);
        for (int i = 0; i < k; ++i) {
            result.push_back(sorted_pairs[i].second);
        }

        return result;
    }
};
