class Solution {
public:
    string reversePrefix(string s, char ch) {
        int l=s.length();
       
        int i=0;
        bool flag=0;
        while(i<l){
            if(s[i]==ch){
                
                flag=1;
               
                break;
            }
           
            i++;
            
        }
        if(flag==0){
            return s;
        }
        int j=0;
        while(j<=i){
            swap(s[j],s[i]);
            j++;
            i--;
        }
        return s;
    }
};