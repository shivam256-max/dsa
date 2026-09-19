class Solution {
public:
    void fun(int idx,vector<int>temp,vector<int>& nums,vector<vector<int>> & ans){
        if(idx == nums.size() ){
            if(temp.size()>=1){
                ans.push_back(temp);

            }
           
            return ;
        }
        temp.push_back(nums[idx]);
        fun(idx+1,temp,nums,ans);
        temp.pop_back();
        fun(idx+1,temp,nums,ans);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        fun(0,temp,nums,ans);
        int result=nums[0];
        for(int i=1;i<nums.size();i++){
            result=result | nums[i];
        }
        int count=0;
        for(int i=0;i<ans.size();i++){
            int value=ans[i][0];
            for(int j=1;j<ans[i].size();j++){
                value=value | ans[i][j];

            }
            if(result==value){
                count++;
            }

        }
        return count;
    }
};