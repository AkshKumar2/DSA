class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro=1;
    vector<int> arr(nums.size());
        for(int i=0;i<nums.size();i++){
            arr[i]=pro;
            pro*=nums[i];
        }
        pro=1;
        for(int j=nums.size()-1;j>=0;j--){
            arr[j]*=pro;
            pro*=nums[j];
        }

        return arr;
    }
};