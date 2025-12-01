class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {

        unordered_set<int> st(nums.begin(), nums.end());

        while (st.count(original)) {  
            original *= 2;
        }

        return original;

        // while (true) {
        //     bool found = false;
        //     for (int n : nums) {
        //         if (n == original) {
        //             original *= 2;
        //             found = true;
        //             break;
        //         }
        //     }
        //     if (found == false) return original;
        // }
        
    }
};