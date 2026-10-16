class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.length();
        string temp="";
        int ans=0;
        int i=0;
        int j=0;
        for(int i=0;i<3;i++){
            temp.push_back(s[i]);
        }
        if(temp[0]!=temp[1] && temp[0]!=temp[2] && temp[2]!=temp[1]){
            ans++;
        }
        for(int i=1;i<=n-3;i++){
            temp.erase(0,1);
            temp.push_back(s[i+2]);
            if(temp[0]!=temp[1] && temp[0]!=temp[2] && temp[1]!=temp[2]){
                ans++;
            }

        }
        return ans;
    }
};