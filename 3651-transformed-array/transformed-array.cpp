class Solution {
    int M = 500; 
    int OFFSET = 200;
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) nums[i] += OFFSET;
        for(int i = 0; i < n; i++){
         int currentVal = nums[i] % M - OFFSET;
         int newIndex = ((i + currentVal) % n + n) % n;
         int targetVal = nums[newIndex] % M;
         nums[i] = nums[i] + (targetVal * M);
        }
       for(int i = 0; i < n; i++) nums[i] = (nums[i] / M) - OFFSET;
       return nums;
    }
};