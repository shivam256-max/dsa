class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();
        
       vector<pair<int,string>> st;
       for(int i=0;i<n;i++){
            st.push_back({heights[i],names[i]});
       }
       sort(st.begin(),st.end(),greater<pair<int,string>>());
       vector<string> ans;
       for(auto i: st){
         ans.push_back(i.second);
       }
       return ans;

        
    }
};