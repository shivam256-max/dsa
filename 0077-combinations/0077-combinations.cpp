class Solution {
public:
    void fun(int index,int value,int limit,vector<int>& temp,vector<vector<int>>& ans,int k){
        if(index==k){
            ans.push_back(temp);
            return ;
        }
        if(value<=limit){
            temp.push_back(value);
            fun(index+1,value+1,limit,temp,ans,k);
            temp.pop_back();
            fun(index,value+1,limit,temp,ans,k);



        }
       

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        vector<vector<int>> ans;
        fun(0,1,n,temp,ans,k);
        return ans;

        
    }
};