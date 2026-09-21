class Solution {
public:
    string clearDigits(string s) {
        int l=s.length();
        stack<char>st;
        int i=0;
        while(i<l){
            if(s[i]>='a' && s[i]<= 'z'){
               st.push(s[i]);
                  
            }
            else{
                st.pop();
            }
            i++;
        }
        string ans="";
        while(!st.empty()){
             ans.push_back(st.top());
             st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
         
    }
};