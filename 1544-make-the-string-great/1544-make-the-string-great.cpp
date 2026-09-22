class Solution {
public:
    string makeGood(string s) {
        string ans="";
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if((!st.empty() && st.top()+32==s[i]) || ( !st.empty()&& st.top()-32==s[i] )){
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
       while(!st.empty()){
          ans.push_back(st.top());
          st.pop();
       }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};