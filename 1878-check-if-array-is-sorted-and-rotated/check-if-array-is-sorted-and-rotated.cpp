class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int rotate = 0;
        for(int i=1 ; i<n ; i++){
            if (nums[i-1]>nums[i]){
                rotate++;
            }        
        }
        if (nums[n-1]>nums[0]){
            rotate++;
        }
        return rotate>1 ? false : true;     
        
    }
};