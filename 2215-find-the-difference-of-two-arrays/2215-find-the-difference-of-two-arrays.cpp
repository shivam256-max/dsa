class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>st1;
        set<int>st2;
        unordered_map<int,int>mpp1;
        unordered_map<int,int>mpp2;
        for(auto i: nums1){
            mpp1[i]++;
        }
        for(auto i: nums2){
            mpp2[i]++;
        }

        vector<vector<int>>ans;
        vector<int>temp1;
        for(auto it: mpp1){
            if(mpp2[it.first]==0){
                temp1.push_back(it.first);
            }
        }
        vector<int>temp2;
        for(auto it: mpp2){
            if(mpp1[it.first]==0){
                temp2.push_back(it.first);
            }
        }
        ans.push_back(temp1);
        ans.push_back(temp2);
        return ans;

        
    }
};