class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums);
        return ans;
    }
    void solve(vector<int>&nums){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(find(temp.begin(),temp.end(),nums[i])==temp.end()){
                temp.push_back(nums[i]);
                solve(nums);
                temp.pop_back();
            }
        }
    }
};