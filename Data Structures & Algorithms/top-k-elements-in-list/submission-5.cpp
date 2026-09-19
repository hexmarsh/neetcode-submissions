class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }

        std::priority_queue<
             pair<int, int>,
             vector<pair<int, int>>,
             greater<pair<int, int>>> heap;

        for (const auto& [num, freq] : counts) {
            heap.push({freq, num});
            if (heap.size() > k) {
                heap.pop();
            }
        }

        vector<int> result;
        result.reserve(k);
        for (int i = 0; i < k; ++i) {
            result.push_back(heap.top().second);
            heap.pop();
        }

        return result;
    }
};
