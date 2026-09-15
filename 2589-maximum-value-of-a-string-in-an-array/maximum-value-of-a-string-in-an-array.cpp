class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int n=strs.size();
        int max=0;
        int val=0;
        for(int i=0;i<n;i++){
            string s=strs[i];
            bool digit=true;
            for(char c:s){
                if(!isdigit(c)){
                    digit=false;
                    break;
                }
            }
            if(digit)val=stoi(s);
            else{
                val=s.size();
                }   
            if(val>max)max=val;
        }
        return max;
    }
};