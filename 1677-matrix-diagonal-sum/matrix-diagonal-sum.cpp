class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) {
        int sum = 0;
        for(int i = 0; i < arr.size(); i++){
            for(int j = 0; j < arr.size(); j++){
                if(i == j || i + j == arr.size() - 1){
                    sum += arr[i][j];
                }
            }
        }return sum;
    }
};