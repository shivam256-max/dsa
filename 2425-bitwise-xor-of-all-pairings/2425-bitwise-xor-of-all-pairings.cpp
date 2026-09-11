class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
      int n=nums1.size();
      int m=nums2.size();
      int xr=0;
      if(((n&1) ==0) && ((m&1) ==0)){
           return 0;

        }
      
      else{
            if((n&1) ==0){
               
                for(auto i: nums1){
                    xr=xr^i;
                }
                return xr;
            }
            if((m&1) ==0){
                for(auto i:nums2){
                    xr=xr^i;
                }
                return xr;
            }
           
        }
        for(int i=0;i<n;i++){
            xr=xr^nums1[i];
        }
        for(int j=0;j<m;j++){
            xr=xr^nums2[j];
        }
        return xr;
        
    }
};