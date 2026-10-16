class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.length();
        int ans=0;
        int i=0;
        int j=0;
        while(j<n){
            if(j-i+1<3){
                j++;
            }
            else{
                if(j-i+1==3){
                    set<char>st;
                    for(int k=i;k<=j;k++){

                        st.insert(s[k]);
                    }
                    if(st.size()==3){
                        ans++;
                    }
                }
                i++;
            }
            
        }
        return ans;
    }
};