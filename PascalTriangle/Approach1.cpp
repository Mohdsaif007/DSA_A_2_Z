class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;
        
        for(int i = 0;i < numRows;i++){
            vector<int> current(i + 1);
            for(int j = 0;j <= i;j++){
                
                if(j == 0 || j == i){
                    current[j] = 1;
                }
                else{
                    int now = ans[i - 1][j] + ans[i - 1][j - 1];
                    current[j] = now;
                }
            }
            ans.push_back(current);
        }
        
        return ans;
        
    }
};