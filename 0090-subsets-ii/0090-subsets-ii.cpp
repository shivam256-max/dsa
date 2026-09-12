class Solution {
public:
    void fun(int index,vector<int>temp,set<vector<int>>& ans,vector<int>nums){
        if(index==nums.size()){
            sort(temp.begin(),temp.end());
            ans.insert(temp);
            return ;
        }
        temp.push_back(nums[index]);
        fun(index+1,temp,ans,nums);
        temp.pop_back();
        fun(index+1,temp,ans,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        set<vector<int>>st;
        fun(0,temp,st,nums);
        vector<vector<int>>ans;
        
        
        for(auto i: st){
            ans.push_back(i);
        }
        return ans;
    }
};