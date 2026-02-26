#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;   // important (empty prefix)

        int sum = 0;
        int count = 0;

        for(int num : nums) {
            sum += num;
            
            int rem = sum % k;

            // Handle negative remainder
            if(rem < 0)
                rem += k;

            count += mp[rem];
            mp[rem]++;
        }

        return count;
    }
};