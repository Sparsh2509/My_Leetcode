class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int l=0;
        int r=n-1;
        for(int i = n-1;i>=0;i--){
            int x;
            if(abs(nums[l])> abs(nums[r])){
                x=nums[l];
                l++;
            }
            else{
                x=nums[r];
                r--;
            }

            res[i]=x*x;
            
        }
        return res;
        
    }
};