class Solution {
public:
    int strStr(string haystack, string needle) {
        // size_t pos = haystack.find(needle);
        // return pos == string::npos ? -1 : (int)pos;       
        // STL APPROACH


        // Brute Force 

        int n = haystack.size();    
        int m = needle.size();
        
        if (m == 0) return 0;  // if needle is empty return 0
        
        for (int i = 0; i <= n - m; i++) {   // loop through haystack
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {  // match characters
                j++;
            }
            if (j == m) return i; // whole needle matched
        }
        return -1; // not found
        
    }
};