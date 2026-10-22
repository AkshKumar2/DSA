class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> ans;
        solve(n,"",ans);
        return ans;
    }
    void solve(int n,string s,vector<string>&ans){
        if(n==s.size()){
            ans.push_back(s);
            return ;
        }
        if(s.empty()  || s.back()!='0' ){
            solve(n,s+'0',ans);
        }
        solve(n,s+'1',ans);
    }
};