class Solution {
public:
    void fun(int index,vector<int> temp,vector<int> nums,vector<vector<int>>& ans){
        if(index==nums.size()){
            ans.push_back(temp);
            return ;
        }
        temp.push_back(nums[index]);
        fun(index+1,temp,nums,ans);
        temp.pop_back();
        fun(index+1,temp,nums,ans);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        fun(0,temp,nums,ans);
        int n=ans.size();
        int c=0;
        for(int i=0;i<n;i++){
            int xr=0;
            for(int j=0;j<ans[i].size();j++){
              xr=xr^ans[i][j];
            }
            c+=xr;
        }
        return c;
    }
};