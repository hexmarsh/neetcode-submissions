class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        std::sort(nums.begin(), nums.end());
        
        int longest = 1;
        int current_longest = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                continue;
            }

            if (nums[i] == nums[i - 1] + 1) {
                ++current_longest;
            }
            else
            {
                current_longest = 1;
            }

            longest = max(current_longest, longest);
        }

        return longest;
    }
};
