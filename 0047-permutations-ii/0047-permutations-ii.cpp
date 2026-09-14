class Solution {
public:
    void fun(vector<int>temp,vector<int>hash,set<vector<int>>& ans,vector<int>nums){
        if(temp.size()==nums.size()){
            ans.insert(temp);
            return ;
        }
        for(int i=0;i<nums.size();i++){
            if(hash[i]==0){
                temp.push_back(nums[i]);
                hash[i]=1;
                fun(temp,hash,ans,nums);
                temp.pop_back();
                hash[i]=0;
               
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>hash(nums.size(),0);
        vector<int>temp;
        set<vector<int>>ans;
        fun(temp,hash,ans,nums);
        vector<vector<int>> answer;
        for(auto i:ans ){
            answer.push_back(i);
        }
        return answer;
        
    }
};