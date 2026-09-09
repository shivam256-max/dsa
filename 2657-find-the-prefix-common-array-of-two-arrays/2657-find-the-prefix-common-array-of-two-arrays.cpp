class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int n=a.size();
        vector<int> ans;
       
      
        for(int i=0;i<n;i++){
            int c=0;
            unordered_map<int,int>mpp;
            for(int j=0;j<=i;j++){
                mpp[a[j]]++;
                if(mpp[a[j]]==2){
                    c++;
                }
                mpp[b[j]]++;
                if(mpp[b[j]]==2 ){
                    c++;
                }
            }
            
                
            ans.push_back(c);
            c++;
            
        }
        return ans;
    }
};