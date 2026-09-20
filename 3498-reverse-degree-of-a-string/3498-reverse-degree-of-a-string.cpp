class Solution {
public:
    int reverseDegree(string s) {
        int l=s.length();
        int ans=0;
        for(int i=0;i<l;i++){
            int value=(i+1)*(('z'-s[i])+1);
            ans=ans+value;
        }
        return ans;
    }
};