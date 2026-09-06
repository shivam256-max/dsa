class Solution {
public:
    int minFlips(int a, int b, int c) {
        int d=1;
        int count=0;
        while((a | b)!=c){
            if(( c & d)){
                if(!((a | b)  & d)){
                    a=a | d;
                  count++;
                }
            }
            else{
                if(a & d){
                   a= a  &(~d);
                   count++;
                }
                if(b & d){
                    b=b & (~d);
                    count++;
                }
            }
            d=d<<1;

        }
        return count;
    }
};