class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        vector<int> zeros;
        vector<int> ones;
        vector<int> twos;
        
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 0){
                zeros.push_back(0);
                
            }else if(nums[i] == 1){
                ones.push_back(1);
                
            }else{
                twos.push_back(2);
            }
        }
        
        vector<int> ans;
        ans.insert(ans.end(), zeros.begin(), zeros.end());
        ans.insert(ans.end(), ones.begin(), ones.end());
        ans.insert(ans.end(), twos.begin(), twos.end());
        
        nums = ans;
    }
};