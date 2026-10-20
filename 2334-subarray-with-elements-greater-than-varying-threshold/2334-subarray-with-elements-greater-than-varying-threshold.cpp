class Solution {
public:

       vector<int>nss(vector<int>nums){
        int n=nums.size();
        vector<int> ans(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]>=nums[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=n;
            }
            else{
                ans[i]=st.top();
            }
            st.push(i);
        }
        return ans;
    }
    vector<int> pss(vector<int> nums){
        int n=nums.size();
        vector<int>ans;
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>=nums[i]){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
            st.push(i);
        }
        return ans;

    }

    int validSubarraySize(vector<int>& nums, int th) {
        vector<int>nse=nss(nums);
        vector<int>pse=pss(nums);
        int n=nums.size();
        for(int i=0;i<n;i++){
            int s=nse[i]-pse[i]-1;
            if(nums[i]>(th/s)){
                return s;
            }
        }
        return -1;
        
    }
};