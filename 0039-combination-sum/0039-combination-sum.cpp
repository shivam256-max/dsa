class Solution {
public:
    void fun(int index,vector<int>& cand,vector<int>& temp, vector<vector<int>>& ans,int target){
        if(index==cand.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return ;
        }
        if(cand[index]<=target){
            temp.push_back(cand[index]);
            fun(index,cand,temp,ans,target-cand[index]);
            temp.pop_back();
        }
        {
            fun(index+1,cand,temp,ans,target);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& cand, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        fun(0,cand,temp,ans,target);
        return ans;
    }
};