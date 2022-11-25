class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int first = -1;
        int last;
        
        for(int i = nums.size() - 2;i >= 0;i--){
            if(nums[i] < nums[i + 1]){
                first = i;
                break;
            }
        }
        
        if(first < 0){
            reverse(nums.begin(),nums.end());
        }else{
            for(int i = nums.size() - 1;i > first;i--){
                if(nums[i] > nums[first]){
                    last = i;
                    break;
                }
             }
             swap(nums[first],nums[last]);
             reverse(nums.begin() + first + 1, nums.end());
            
        }
    }
};