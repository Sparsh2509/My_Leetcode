class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int n = nums.size();
        
        // Find first occurrence
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            
            if (nums[mid] == target) {
                first = mid;
                right = mid - 1; // move left
            }
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        
        // Find last occurrence
        left = 0, right = n - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            
            if (nums[mid] == target) {
                last = mid;
                left = mid + 1; // move right
            }
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        
        return {first, last};
    }
};