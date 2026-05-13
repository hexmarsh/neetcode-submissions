class Solution {
public:
    bool isPalindrome(string s) {

        int l = 0;
        int r = s.size() - 1;

        while (l < r)
        {
            char lchar = tolower(s[l]);
            char rchar = tolower(s[r]);

            if (!isalnum(lchar))
            {
                l++;
                continue;
            }

            if (!isalnum(rchar))
            {
                r--;
                continue;
            }

            if (lchar != rchar)
            {
                return false;
            }

            l++;
            r--;
        }

        return true;
    }
};
