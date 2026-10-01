class Solution {
public:
    int minimizedStringLength(string s) {
        string r="";
        for(char i:s){
            if(r.contains(i)){
            }
            else{
                r+=i;
            }
        }return r.size();
    }
};