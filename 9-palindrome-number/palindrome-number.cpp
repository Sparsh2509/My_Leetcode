class Solution {
public:
    bool isPalindrome(int x) {
        long double temp,a=0,rem,pal=0;
        temp=x;
         while(x>0){
            rem=x%10;
            pal=pal*10+rem;
            x=x/10;
        }
        return pal==temp;
    }
};