class Solution {
public:
    int maxDepth(string s) {
        stack<char> t;
        int res=0;

        for (char &ch : s){
            if(ch == '('){
                t.push(ch);
            }else if(ch == ')') {
                t.pop();
            }
            res =max(res , int(t.size()));

        
        }
        return res;
        
    }
};