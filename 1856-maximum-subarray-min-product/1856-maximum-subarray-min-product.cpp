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

    
    int maxSumMinProduct(vector<int>& nums) {
        int n=nums.size();
        long long  ans=0;
        int mod=1e9+7;
        vector<int> nse=nss(nums);
        vector<int> pse=pss(nums);
        vector<long long>pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        for(int i=0;i<n;i++){
            if(pse[i]==-1){
                int r=nse[i]-1;
                long long  s=(pre[r]*nums[i]);
                ans=max(s,ans);
               

            }
            else{
                int l=pse[i];
                long long  e=pre[l];
                int r=nse[i]-1;
                long long  s=((pre[r]-e)*nums[i]);
                ans=max(s,ans);


            }

        }
        return ans%mod;

        
    }
};