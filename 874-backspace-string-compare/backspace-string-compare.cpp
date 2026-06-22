class Solution {
public:
    bool backspaceCompare(string s, string t) {
          string as="";
          string at="";

        for(char &ch: s){
            if (ch=='#'){
                if(!as.empty())
                    as.pop_back();
            }
            else{
                as.push_back(ch);
               
            }
        }
        for(char &ch: t){
            if (ch=='#'){  
                if(!at.empty())              
                    at.pop_back();
            }
            else{                
                at.push_back(ch);
            }
        }
        return as==at;
        
    }
};