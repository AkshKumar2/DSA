class Solution {
public:
    int maxDepth(string s) {
        stack<char> ss;
        int c = 0;
        int max=0;
        for (char i : s) {
            if (i == '(' && ss.empty()) {
                ss.push(i);
                c = 1;
            } else if (i == '(' && ss.top() == '(') {
                c++;
                ss.push(i);
            } else if (i == ')') {
                ss.pop();
                c--;
            } else {
            } if(max<c)max=c;
        }
        return max;
    }
};