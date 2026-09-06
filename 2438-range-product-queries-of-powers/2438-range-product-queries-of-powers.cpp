class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> power;
        int d=1;
        while(!(d & n)){
            d=d<<1;
            if(d & n){
                break;
            }
        }
        while(d <= n){
            if(d & n){
                power.push_back(d & n);

            }
           
           d=d<<1;
        }
        int m=queries.size();
        vector<int> ans;
        for(int i=0;i<m;i++){
            long long  temp=1;
           for(int j= queries[i][0];j<=queries[i][1];j++){
                temp = (temp * power[j]) % 1000000007;

           }
           ans.push_back(temp);
        }
        return ans;
    }
};