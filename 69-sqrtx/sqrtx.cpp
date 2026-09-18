class Solution {
public:
    int mySqrt(int x) {
        int l=1,r=x;
        long long s,mid;
        while(l<=r){
            mid=l+(r-l)/2;
            s=mid*mid;
            if(s==x)return mid;
            else if(s>x)r=mid-1;
            else l=mid+1;
        }return r;
    }
};