class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> unique;

        for (int num : nums) {
            if (unique.count(num)) {
                unique.erase(num);
            }
            else
            {
                unique.insert(num);
            }
        }

        return *unique.begin();
    }
};
