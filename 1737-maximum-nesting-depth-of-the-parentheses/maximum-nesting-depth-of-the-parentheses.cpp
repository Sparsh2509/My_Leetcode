class Solution {
public:
    int maxDepth(string s) {
        int openbracket = 0;
        int res=0;

        for (char &ch : s){
            if(ch == '('){
                openbracket++;
            }else if(ch == ')') {
                openbracket--;
            }
            res =max(res , openbracket);

        
        }
        return res;
        
    }
};