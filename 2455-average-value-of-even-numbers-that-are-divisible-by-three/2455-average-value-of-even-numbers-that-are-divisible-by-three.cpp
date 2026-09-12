class Solution {
public:
    int averageValue(vector<int>& nums) {
        int c=0;
        int ans=0;
        for(auto i: nums){
            if((i & 1) ==0){
                if((i%3)==0){
                    ans=ans+i;
                    c++;

                }
            }
        }
        if(c==0){
            return 0;
        }
        ans=(ans/c);
        return ans;
    }
};