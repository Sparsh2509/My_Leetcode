class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()){
            return false;
        }
        vector<int> count(26, 0);

        int n = s.length();

            for(int i = 0; i<n; i++) {
                count[s[i]-'a']++;
                count[t[i]-'a']--;
            }
            bool allZeros = all_of(begin(count), end(count), [](int element) {
            return element == 0;
        });
        
        return allZeros;
     
        
    }
};