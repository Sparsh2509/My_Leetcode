class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.length() % 2 !=0){
            return false;
        }

        for(char  &ch : s ){
            if(ch == '('){
                st.push(')');
            }
            else if(ch == '{'){
                st.push('}');
            }
            else if(ch == '['){
                st.push(']');
            }
            else if(st.empty() || st.top()!= ch){
                return false;
            }
            else{
                st.pop();
            }
        }

        return st.empty();

        
    }
};