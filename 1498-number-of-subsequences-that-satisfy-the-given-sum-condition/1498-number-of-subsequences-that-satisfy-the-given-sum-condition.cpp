class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        int mod = 1e9 + 7;
        int s = 0;

        sort(nums.begin(), nums.end());

        vector<int> ans;

        int i = 0;
        int j = n - 1;

        while(i <= j) {
            if(nums[i] + nums[j] > target) {
                j--;
            }
            else {
                ans.push_back(j-i);
                i++;
            }
        }

        vector<long long> power(n, 1);

        for(int i = 1; i < n; i++) {
            power[i] = (power[i-1] * 2) % mod;
        }

        for(int i = 0; i < ans.size(); i++) {
            s = (s + power[ans[i]]) % mod;
        }

        return s;
    }
};