class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {

        while (true) {
            bool found = false;
            for (int n : nums) {
                if (n == original) {
                    original *= 2;
                    found = true;
                    break;
                }
            }
            if (!found) return original;
        }
        
    }
};