class Solution {
public:
    bool isNonDecreasing(vector<int>& nums) {
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] < nums[i - 1]) return false;
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int ops = 0;

        while (!isNonDecreasing(nums)) {
            int minSum = INT_MAX, idx = -1;
            // Find leftmost pair with minimum sum
            for (int i = 0; i < nums.size() - 1; ++i) {
                int sum = nums[i] + nums[i + 1];
                if (sum < minSum) {
                    minSum = sum;
                    idx = i;
                }
            }
            // Merge the selected pair
            nums[idx] = nums[idx] + nums[idx + 1];
            nums.erase(nums.begin() + idx + 1);
            ops++;
        }

        return ops;
    }
};