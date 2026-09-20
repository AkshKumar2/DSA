class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0,j=1;
        vector<int> arr(nums.size());
        for(int a=0;a<nums.size();a++){
            if(nums[a]%2==0){
                arr[i]=nums[a];
                i=i+2;
            }
            else{
                arr[j]=nums[a];
                j+=2;
            }
        }return arr;
    }
};