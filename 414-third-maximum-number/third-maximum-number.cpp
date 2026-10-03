class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int m = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (m < nums[i])
                m = nums[i];
        }
        int s = nums[0];
        bool fs = false;
        for (int i = 0; i < nums.size(); i++) {
            if (m > nums[i] && (!fs || s < nums[i])) {
                s = nums[i];
                fs = true;
            }
        }
        if (!fs)
            return m;
        int t = nums[0];
        bool ft = false;
        for (int i = 0; i < nums.size(); i++) {
            if (s > nums[i] && (!ft || t < nums[i])) {
                t = nums[i];
                ft = true;
            }
        }
        if (!ft)
            return m;
        return t;
    }
};