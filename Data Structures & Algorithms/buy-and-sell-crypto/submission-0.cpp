class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;

        for (int i = 0; i < prices.size(); ++i) {
            int local_max = 0;

            for (int j = i + 1; j < prices.size(); ++j) {
                if (prices[j] > prices[i]) {
                    local_max = prices[j] - prices[i];
                }

                max = std::max(max, local_max);
            }
        }

        return max;
    }
};
