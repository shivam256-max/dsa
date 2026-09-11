class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int xr1=0;
        int xr2=0;
        for(auto i: arr1){
            xr1=xr1^i;
        }
        for(auto i: arr2){
            xr2=xr2^i;
        }
        return (xr1 & xr2);
        
    }
};