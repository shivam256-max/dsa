class Solution {
public:
    void fun(int index,vector<int> cand,vector<int>temp,int target,vector<vector<int>>& ans){

        if(target==0){
            ans.push_back(temp);
            return ;
        }
            
    
        for(int  i=index;i<cand.size();i++){
            if(i>index && cand[i]==cand[i-1] ){
                continue;
            }
            if(cand[i]>target){
                break;
            }
            temp.push_back(cand[i]);
            fun(i+1,cand,temp,target-cand[i],ans);
            temp.pop_back();
           
          
                
        }
      
    }
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        vector<int>temp;
        vector< vector<int>> ans;
        sort(cand.begin(),cand.end());
        fun(0,cand,temp,target,ans);
        return ans;

        
    }
};