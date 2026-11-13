class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int j=0;
        int c=0;
        while(j!=nums.size()-1){
            for(int i=j;i<nums.size();i++){
                if((nums[i]==nums[j]) && (i!=j)){
                    c++;
                }
            }j++;
        }return c;
    }
};