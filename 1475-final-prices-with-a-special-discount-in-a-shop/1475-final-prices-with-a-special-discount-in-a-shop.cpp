class Solution {
public:
    vector<int> finalPrices(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int dis=0;
            for(int j=i+1;j<n;j++){
                if(nums[i]>=nums[j]){
                    dis=nums[j];
                    break;
                }


            }
            ans.push_back(nums[i]-dis);
        }
        return ans;
    }
};