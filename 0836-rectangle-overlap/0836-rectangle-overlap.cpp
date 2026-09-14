class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int n=rec1.size();
        int m=rec2.size();
        int leftx1=max(rec1[0],rec2[0]);
        int rightx2=min(rec1[2],rec2[2]);
        int lefty1=max(rec1[1],rec2[1]);
        int righty2=min(rec1[3],rec2[3]); 
        if((leftx1 < rightx2 )&& (lefty1<righty2)){
            return true;
        }
        
        return false;
        
        
    }
};