class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        bool flag=false;
        for(int i=0;i<n;i++){
            int e=nums[i];
            int s=0;
            while(e>0){
                s=s+(e%10);
                e=e/10;
            }
            if(s==i){
                mini=min(mini,i);
                flag=true;
            }
        }
        if(flag==false){
            return -1;
        }
        return mini;
    }
};