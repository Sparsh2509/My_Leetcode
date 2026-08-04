class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int totalsum=0;
        int n = cardPoints.size();
        for(int a : cardPoints){
            totalsum+= a;
        }
        if (k==n){
            return totalsum;
        }
        int window=n-k;
        int windowsum=0;
        for(int i=0; i<window;i++){
            windowsum+=cardPoints[i];
        }
        int curr = windowsum;
        for (int i=window;i<n;i++){
            windowsum+=cardPoints[i];
            windowsum-=cardPoints[i-window];
            curr= min(curr,windowsum);
        }

        return totalsum-curr;        
    }
};