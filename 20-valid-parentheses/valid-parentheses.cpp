class Solution {
public:
    bool isValid(string s) {
        stack<char>a;
        if(s.length() % 2 !=0){
            return false;
        }
        for(int i=0;i<s.length();i++){
            if(a.empty()){
               a.push(s[i]); 
            }
            else if ((a.top() == '(' && s[i] == ')')
                 || (a.top() == '{' && s[i] == '}')
                 || (a.top() == '[' && s[i] == ']'))
            {
                a.pop();
            }
            else{
                a.push(s[i]);
            }    
        }
        if(a.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};