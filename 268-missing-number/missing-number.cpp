class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n =nums.size();
        // int res = n;

        // // int sum = (n*(n+1))/2;

        // for(int i = 0;i<n;i++){
        //     // sum = sum - nums[i];
        //     res = res ^ i;
        //     res = res ^ nums[i];

        // }
        // return res;
        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // for(int i = 0; i < n; i++){
        //     if(nums[i] != i){
        //         return i;

        //     } 
        // }
        // return n;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int l   = 0;
        int r   = n-1;
        int result = n;
        
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(nums[mid] > mid) {
                result = mid;
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        
        return result;
    }
        
    
};