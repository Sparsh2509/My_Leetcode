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
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            if(nums[i] != i){
                return i;

            } 
        }
        return n;
    }
        
    
};