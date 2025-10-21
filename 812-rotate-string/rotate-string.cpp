class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int g = goal.size();
        if(n != g){
           return false;
        } 
        if ((s+s).find(goal)!= string::npos) {
            return true;
        }   
        else{
            return false;
        }   
    }
};