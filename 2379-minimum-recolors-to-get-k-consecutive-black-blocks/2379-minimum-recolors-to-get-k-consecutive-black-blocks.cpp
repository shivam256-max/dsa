class Solution {
public:
    int minimumRecolors(string b, int k) {
        int ans=0;
        int n=b.size();
        int nob=0;
        int now=0;
        for(int i=0;i<k;i++){
            if(b[i]=='W'){
                now++;
            }
            else{
                nob++;
            }

        }
        ans=now;
        for(int i=1;i<=n-k;i++){
            if(b[i-1]=='W'){
                now--;
            }
            if(b[i+k-1]=='W'){
                now++;
            }
            ans=min(ans,now);
        }
        return ans;

        
    }
};