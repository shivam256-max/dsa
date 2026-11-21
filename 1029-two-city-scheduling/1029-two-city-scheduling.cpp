class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size();
        vector<pair<int,int>> nums;
        for(int i=0;i<n;i++){
            
            int diff=costs[i][0]-costs[i][1];
            nums.push_back({diff,i});
        }
        sort(nums.begin(),nums.end());
        int i=0;
        int ans=0;
        while(i<(n/2)){
            int idx=nums[i].second;
            ans+=costs[idx][0];
            i++;

        }
        while(i<n){
            int idx=nums[i].second;
            ans+=costs[idx][1];
            i++;
        }
        return ans;

        
    }
};