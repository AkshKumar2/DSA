class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> cur;
        solve(0,nums,cur,ans);
        return ans;
    }
    void solve(int i,vector<int> &nums,vector<int>&cur,vector<vector<int>> &ans){
        if(i==nums.size()){
            ans.push_back(cur);
            return;
        }
        cur.push_back(nums[i]);
        solve(i+1,nums,cur,ans);
        cur.pop_back();
        solve(i+1,nums,cur,ans);
    }
};