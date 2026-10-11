class Solution {
public:
    int differenceOfSums(int n, int m) {
        vector<int> a(n);
        vector<int> b(n);
        for(int i=1;i<=n;i++){
            if(i%m==0)a.push_back(i);
            else b.push_back(i);
        }
        int sp=0,sn=0;
        for(int i=0;i<a.size();i++){
            sp+=a[i];
        }
        for(int i=0;i<b.size();i++){
            sn+=b[i];
        }
        return sn-sp;
    }
};