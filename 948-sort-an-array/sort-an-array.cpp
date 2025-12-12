//merge sort 
// divide and conquer algorithm
// divide into halves - single piece 
// sort & merge
class Solution {
void mergeSort(vector<int>& nums, int st, int end){
    if(st >= end) return;
    int mid = st + (end - st)/2;

    //10,9,1,2,3
    mergeSort(nums, st, mid); // 10,9,1 //10,9 // 10
    mergeSort(nums, mid+1, end); // 9
    merge(nums, st, mid, end); // 10,9 // 9,10 
}

void merge(vector<int>& nums, int st, int mid, int end){
    vector<int> temp;
    int i = st;
    int j = mid+1;

    while(i <= mid && j <= end){
        if(nums[i] <= nums[j]){
            temp.push_back(nums[i]);
            i++;
        }else{
            temp.push_back(nums[j]);
            j++;
        }
    }

    // let's say second arr is completed
    while(i<=mid){
        // copy the remaining elements from first arr to temp
        temp.push_back(nums[i]);
        i++;
    }

    //  let's say first arr is completed 
    while(j <= end){
        // copy the remaining elements from second arr to temp
        temp.push_back(nums[j]);
        j++;
    }

    for(int i = st; i <= end; i++){
        nums[i] = temp[i - st];
    }
}

public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, 0, n-1); // st =0 and end = n-1
        return nums;
        
    }
};