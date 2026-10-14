class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<int> s;
        string r;
        int j=0;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                s.push(word[i]);
                while(!s.empty()){
                    r+=s.top();
                    s.pop();
                }
                j=i+1;
                break;
            }
            else s.push(word[i]);
        }
        for(int i=j;i<word.size();i++){
            r+=word[i];
        }return r;
    }
};