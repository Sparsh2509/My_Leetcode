class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size();

        int res = 1;
        for (int i =1 ; i<n;i++){
            if (arr[i]!=arr[res-1]){
                arr[res]=arr[i];
                res++;
            }
        }
        return res;
        
    }
};