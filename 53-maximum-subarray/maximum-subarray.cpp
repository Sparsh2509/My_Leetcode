class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int res=nums[0];
        int maxending = nums[0];
        for(int i =0 ;i<n;i++){
            int maxending= max(nums[i],maxending+nums[i]);
            res=max(res,maxending);

        }
        return res;
    }
};