class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
        {
            return 0;
        }

        std::sort(nums.begin(), nums.end());

        int result = 0;
        int curr = nums[0];
        int streak = 0;
        int i = 0;

        while (i < nums.size())
        {
            if (curr != nums[i])
            {
                curr = nums[i];
                streak = 0;
            }

            while (i < nums.size() && nums[i] == curr)
            {
                i++;
            }

            streak++;
            curr++;
            result = std::max(result, streak);
        }

        return result;
    }
};
