class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     vector<int> arr;
    //     int s=0;
    //     int curr=0;
    //     for(int e=0;e<nums.size();e++){
    //         curr+=nums[e];
    //         while(target<curr){
    //             curr-=nums[s];
    //             s++;
    //         }
    //         if(curr==target){
    //             arr.push_back(s);
    //             arr.push_back(e);
    //         }     
    //          //return arr;
                
    //     }       
    //  return arr;
    int n = nums.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if (nums[i]+nums[j]==target){
                return{i,j};
            }
        }
    }
    return {};

    }       
    
};