class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int i = 0;
        int l = 0, r = 0;
        int n = s.length();

        while (i < n) {

            // Skip extra spaces
            while (i < n && s[i] == ' ')
                i++;

            // Copy current word
            while (i < n && s[i] != ' ') {
                s[r++] = s[i++];
            }

            // Reverse current word
            if (l < r) {
                reverse(s.begin() + l, s.begin() + r);

                // Put one space after word
                s[r++] = ' ';

                l = r;
            }
        }

        // Remove last extra space
        if (r > 0)
            r--;

        s.resize(r);

        return s;
    }
};