class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left==0 && right==0){
            return 0;
        }
       while(left < right){
        right=(right) & (right-1);
         
       }
       return right;
        
    }
};