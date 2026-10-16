class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int n=s.size();
        int ans=0;
        string t="";
        for(int i=0;i<k;i++){
            t.push_back(s[i]);

        }
        int number=stoi(t);
        if(number!=0 && num%number==0){
            ans++;
        }
        for(int i=1;i<=n-k;i++){
            t.erase(0,1);
            t.push_back(s[i+k-1]);
            number=stoi(t);
            if(number!=0 && num % number==0){
                ans++;
            }
        }
        return ans;
        
    }
};