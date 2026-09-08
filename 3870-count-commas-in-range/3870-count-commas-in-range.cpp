class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return 0;
        }
        int i=1000;
        int ans=0;
        while(i<=n){
            ans++;
            i++;
        }
       return ans;
        
        
    }
};