class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int mx = INT_MIN;
        
        for(int i = 0;i < nums.size();i++){
            for(int j = i;j < nums.size();j++){
                
                int curr = 0;
                for(int k = i;k <= j;k++){
                    curr += nums[k];
                }
                
                mx = max(curr, mx);
                
            }
        }
        
        return mx;
    }
};