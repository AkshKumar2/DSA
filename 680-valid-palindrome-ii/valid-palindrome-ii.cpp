class Solution {
public:
    bool check(string s, int f, int l) {
        while(f < l) {
            if(s[f] != s[l])
                return false;
            f++;
            l--;
        }return true;
    }
    bool validPalindrome(string s) {
        int f = 0;
        int l = s.size() - 1;

        while(f < l) {
            if(s[f] != s[l]) {
                return check(s, f + 1, l) || check(s, f, l - 1);
            }
            f++;
            l--;
        }return true;
    }
};