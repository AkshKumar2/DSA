class Solution {
public:
    int reverseDegree(string s) {
        int i,su=0,p=1;
        for(char c:s){
            i=c-'a'+1;
            su+=(27-i)*p;
            p++;
        }return su;
    }
};