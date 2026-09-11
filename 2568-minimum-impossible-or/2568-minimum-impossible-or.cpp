class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        int n=nums.size();
        int mini=*min_element(nums.begin(),nums.end());
        if(mini>1){
            return 1;
        }
        unordered_map<int,int>mpp;
        for(auto i: nums){
            if((i & (i-1))==0){
                mpp[i]++;

            }
           
        }
        int ans=2;
        while(1){
            if(mpp[ans]==0){
                break;
            }
            ans=ans<<1;

        }

        return ans;
    }
};