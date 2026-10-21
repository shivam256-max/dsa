class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long long totalsum=0;
        for(int i=0;i<n;i++){
            totalsum+=nums[i];
        }
        int c=0;
        long long s=0;
        for(int i=0;i<n-1;i++){
            s+=nums[i];
            long long right=totalsum-s;
            if(right<=s){
                c++;
            }
        }
        return c;
        
    }
};