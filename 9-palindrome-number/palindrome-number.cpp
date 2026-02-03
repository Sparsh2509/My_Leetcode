class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        long rem =0 ;
        int a=x;
        
        while (a!=0){
            rem = rem*10 + a%10;
            a=a/10;

        }
        return (rem==x);
        
    }
};