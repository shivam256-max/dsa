class Solution {
public:
    string reversePrefix(string s, char ch) {
        string ans="";
        int l=s.size();
        stack<char>st;
        int i=0;
        bool flag=0;
        while(i<l){
            if(s[i]==ch){
                flag=1;
                st.push(ch);
                i++;
                break;
            }
            st.push(s[i]);
            i++;
        }
        if(flag==0){
            return s;
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
       while(i<l){
         ans.push_back(s[i]);
          i++;
       }
        return ans;
        
    }
};