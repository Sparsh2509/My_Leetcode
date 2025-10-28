class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int x=nums.size();
        int res =0;
        for(int i=0;i<x;i++){
            if(nums[i]!=val){
                nums[res]=nums[i];
                res++;
                

            }
        }
        return res;
    }
};