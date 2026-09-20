class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter = 0;

        for (int i = 0; i < 32; ++i) {
            uint32_t bit = n & (1 << i);

            if (bit) {
                ++counter;
            }
        }

        return counter;
    }
};
