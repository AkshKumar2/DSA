class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> so;
        for(int i=s.size()-1;i>=0;i--){
            //if(so.empty())so.push(s[i]);
            if(!so.empty() && s[i]==so.top()){
                so.pop();
            }
            else so.push(s[i]);
        }
        string r="";
        while(!so.empty()){
            r+=so.top();
            so.pop();
        }
        return r;
    }
};