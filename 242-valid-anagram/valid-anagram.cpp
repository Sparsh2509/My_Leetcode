class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()){
            return false;
        }
        vector<int> count(26, 0);

        int n = s.length();

            for(int i = 0; i<n; i++) {
                count[s[i]-'a']++;
                count[t[i]-'a']--;
            }
            bool allZeros= true;
            for (int i=0 ; i<count.size();i++){
                if (count[i]!=0){
                    allZeros=false;
                    break;
                }
            }

        
        return allZeros;
     
        
    }
};