class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int count = 0;
        
        // Step 1: Skip trailing spaces
        int i = n - 1;
        while(i >= 0 && s[i] == ' ') {
            i--;
        }
        
        // Step 2: Count characters of last word
        while(i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }
        
        return count;
    }
};
