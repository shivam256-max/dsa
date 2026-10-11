class Solution {
public:
    int sumOfSquares(vector<int>& a) {
        int n=a.size();
        int c=0;
        for(int i=0;i<n;i++){
            int j=i+1;
            int s=a[i];
            if(n%j==0){
               
                c=c+(s*s);


            }
        }
        return c;
        
    }
};