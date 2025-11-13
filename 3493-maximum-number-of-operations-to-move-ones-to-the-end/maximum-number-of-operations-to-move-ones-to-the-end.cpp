class Solution {
public:
    int maxOperations(string s) {
        // int n          = s.length();
        // int result     = 0;
        // int i          = 0;
        // int count1seen = 0;

        // while(i < n) {
        //     if(s[i] == '0') {
        //         result += count1seen;
        //         while(i < n && s[i] == '0') //moved till first '0' occurence
        //             i++;
        //     } else {
        //         count1seen++;
        //         i++;
        //     }
        // }

        // return result;
        int ones = 0, res = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '1')
                ones++;
            else if ((i > 0) && s[i - 1] == '1')
                res += ones;
        }
        return res;


        
    }
};