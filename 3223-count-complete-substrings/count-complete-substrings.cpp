class Solution {
public:
    int countCompleteSubstrings(string word, int k) {
        int n = word.size();
        int result = 0;
        for (int x = 1; x <= 26; x++) {
            // condition 1
            int length = x * k;     
            if (length > n) break;
            
            vector<int> freq(26, 0);
            int countFreqK = 0;
            for (int l = 0, r = 0; r < n; r++) {
                // check the condition 2
                if ((r > 0) && (abs(word[r - 1] - word[r]) > 2)) {
                    fill(freq.begin(), freq.end(), 0);
                    countFreqK = 0;
                    l = r;
                }
                // update the frequency
                if (freq[word[r] - 'a'] == k) countFreqK--;         // freq `k` to `k + 1`
                freq[word[r] - 'a']++;
                if (freq[word[r] - 'a'] == k) countFreqK++;         // freq `k - 1` to `k`
                // limit the windows size with `x * k`
                if ((r - l + 1) > length) {
                    // remove the left character and update the frequency
                    if (freq[word[l] - 'a'] == k) countFreqK--;     // freq `k` to `k - 1`
                    freq[word[l] - 'a']--;
                    if (freq[word[l] - 'a'] == k) countFreqK++;     // freq `k + 1` to `k`
                    l++;
                }
                // update the result
                if (((r - l + 1) == length) && (countFreqK == x)) result++;
            }
        }
        return result;
        
        
        
    }
};