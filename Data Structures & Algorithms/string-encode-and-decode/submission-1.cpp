class Solution {
public:
    string encode(vector<string>& strs) {
        ostringstream oss;

        for (const string& str : strs)
        {
            oss << str.size() << '#' << str;
        }

        cout << oss.str() << endl;

        return oss.str();
    }

    vector<string> decode(string s) {
        // Format: num#string
        vector<string> decoded;
        int i = 0;

        while (i < s.length())
        {
            // Find position of '#'
            size_t pos = s.find('#', i);

            // Read number before '#'
            int num_chars_to_read = stoi(s.substr(i, pos - i));

            // Get substring after '#'
            string next_str = s.substr(pos + 1, num_chars_to_read);

            decoded.push_back(next_str);

            // Move index forward
            i = pos + 1 + num_chars_to_read;
        }

        return decoded;
    }
};
