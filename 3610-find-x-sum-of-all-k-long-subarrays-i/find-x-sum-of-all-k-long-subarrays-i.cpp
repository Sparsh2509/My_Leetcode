class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i <= n - k; i++) {
            // Current subarray
            vector<int> sub(nums.begin() + i, nums.begin() + i + k);

            // Frequency map
            unordered_map<int, int> freq;
            for (int num : sub) {
                freq[num]++;
            }

            // Move to vector for sorting
            vector<pair<int, int>> freqList(freq.begin(), freq.end());

            // Sort by frequency (desc), then by value (desc)
            sort(freqList.begin(), freqList.end(), [](auto &a, auto &b) {
                if (a.second == b.second)
                    return a.first > b.first;
                return a.second > b.second;
            });

            // Take top x elements
            unordered_set<int> topX;
            for (int j = 0; j < freqList.size() && j < x; j++) {
                topX.insert(freqList[j].first);
            }

            // Calculate sum of only top x elements
            int total = 0;
            for (int num : sub) {
                if (topX.count(num)) total += num;
            }

            ans.push_back(total);
        }

        return ans;
        
    }
};