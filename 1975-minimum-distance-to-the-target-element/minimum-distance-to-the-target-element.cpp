class Solution {
public:
    int getMinDistance(vector<int>& arr, int tgt, int startIdx) {
        int minDist = INT_MAX;

        for (int idx = 0; idx < arr.size(); idx++) {
            if (arr[idx] == tgt) {
                int dist = abs(idx - startIdx);
                minDist = min(minDist, dist);
            }
        }

        return minDist;
    }
};