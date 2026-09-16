class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int idx=0;
        vector<int>ans;
        for(auto i: words){
            for(int j=0;j<i.size();j++){
                if(i[j]== x){
                    ans.push_back(idx);
                    break;
                }
            }
            idx++;
        }
        return ans;
    }
};