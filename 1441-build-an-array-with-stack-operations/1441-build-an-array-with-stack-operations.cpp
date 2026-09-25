class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int i=1;
        int j=0;
        while(i<=n  && j<target.size()){
          
            if( i==target[j]){
                   ans.push_back("Push");
                   i++;
                   j++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
                i++;
            }
            

        }
        return ans;
    }
};