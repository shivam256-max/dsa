class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n=nums.size();
        long long d=0;
        int c=1;
        vector<bool>ans;
        for(int i=0;i<n;i++){
           
            d=((d<<1)+nums[i])%5;
            
            if((d%5)==0){
             ans.push_back(true);

            }
            else{
                ans.push_back(false);
            }
           
        }
        return ans;
    }
};