class Solution {
public:
    string removeStars(string s) {
        stack<char> ss;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                ss.pop();
            }
            else {
                ss.push(s[i]);
            }
        }
        string r="";
        while(!ss.empty()){
            r+=ss.top();
            ss.pop();
        }
        reverse(r.begin(),r.end());
        return r;
    }
};