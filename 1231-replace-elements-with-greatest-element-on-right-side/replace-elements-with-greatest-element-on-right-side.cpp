class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxRight = -1; // The last element’s replacement is -1

        for (int i = n - 1; i >= 0; i--) {
            int temp = arr[i];   // store current value
            arr[i] = maxRight;   // replace current with max on right
            maxRight = max(maxRight, temp); // update maxRight
        }

        return arr;

        
    }
};