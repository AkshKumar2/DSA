class Solution {
public:
    int calPoints(vector<string>& o) {
        stack<int> ss;
        for(int i=0;i<o.size();i++){
            if(o[i]!="C" && o[i]!="D" && o[i]!="+"){
                ss.push(stoi(o[i]));
            }
            else if(o[i]=="+"){
                int i,j;
                i=ss.top();
                ss.pop();
                j=ss.top();
                ss.push(i);
                ss.push(i+j);
            }
            else if(o[i]=="C"){
                ss.pop();
            }
            else if(o[i]=="D"){
                ss.push(2*ss.top());
            }
        }
        int s=0;
        while(!ss.empty()){
            s+=ss.top();
            ss.pop();
        }return s;
    }
};