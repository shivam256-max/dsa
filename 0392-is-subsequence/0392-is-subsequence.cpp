class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n==0 && m==0){
            return true;
        }
        int i=0;
        int j=0;
        while(j<m){

            if(s[i]!=t[j]){
                j++;
            }
            else{
                i++;
                j++;
            }
            if(i==n){
                return true;
            }

        }
        return false;
        
    }
};