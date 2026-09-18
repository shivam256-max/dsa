class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mpp;
        for(auto i: s){
            mpp[i-'a']++;
        }
        set<int>st;
        for(auto it: mpp){
            st.insert(it.second);
        }
        if(st.size()>1){
            return false;
        }
        return true;
    }
};