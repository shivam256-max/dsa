class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        int j=1;
        int ans=0;
        while(1){
            vector<int>pre;
            pre.push_back(nums[0]+j);
            int flag=1;
            if(pre[0]<=0){
                j++;
                continue;
            }
            ans=j;
            for(int i=1;i<n;i++){
                pre.push_back(pre[i-1]+nums[i]);
                if(pre[i]<=0){
                    flag=0;
                    break;
                }

                   
            }
            if(flag==1){
                break;
            }
            j++;

        }
        return ans;
    }
};