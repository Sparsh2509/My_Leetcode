class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int res= nums[0];
        for(int i =0 ;i<n;i++){
            int maxending= max(maxending+nums[i], nums[i]);
            res=max(res,maxending);

        }
        return res;
    }
};