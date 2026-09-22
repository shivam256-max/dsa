class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        stack<char>st;
        for(auto i: s){
            if(!st.empty() && st.top()==i){
                st.pop();
                continue;
            }
            st.push(i);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin() ,ans.end());
        return ans;
    }
};