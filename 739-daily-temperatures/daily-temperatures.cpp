class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
    vector<int> ans(arr.size());
        stack<int> s;
        int j=arr.size()-1;
        s.push(j);
        ans[j]=0;
        j--;
        while(j>=0){
            while(!s.empty() && arr[j]>=arr[s.top()]){
                s.pop();
            }
            if(s.empty()){
                ans[j]=0;
            }
            else{
                ans[j]=s.top()-j;
                
                }
            s.push(j);
            j--;
            
        }return ans;
        
    }
};