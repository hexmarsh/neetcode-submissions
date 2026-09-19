class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char, char> close_to_open
        {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        std::stack<char> st;

        for (char c : s) {
            if (!close_to_open.count(c)) {
                st.push(c);
                continue;
            }

            if (st.empty() || st.top() != close_to_open[c]) {
                return false;
            }
            
            st.pop();
        }

        return st.empty();
    }
};
