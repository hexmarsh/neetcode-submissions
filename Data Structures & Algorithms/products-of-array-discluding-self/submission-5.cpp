class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> products_left(n);
        vector<int> products_right(n);
        vector<int> result(n);

        products_left[0] = 1;
        for (int i = 1; i < n; ++i) {
            products_left[i] = products_left[i - 1] * nums[i - 1];
        }

        products_right[n - 1] = 1;
        for (int i = n - 2; i >= 0; --i) {
            products_right[i] = products_right[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < n; ++i) {
            result[i] = products_left[i] * products_right[i];
        }

        return result;
    }
};
