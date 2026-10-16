class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> ss;
        for(int i=0;i<prices.size();i++){
            while(!ss.empty() && prices[ss.top()]>=prices[i]){
                prices[ss.top()]-=prices[i];
                ss.pop();
            }ss.push(i);
        }
        return prices;
    }
};