class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones_cnt = 0;
        int max_ones = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
            ones_cnt++;
            }
            else{
            max_ones = max(ones_cnt, max_ones);
            ones_cnt = 0;
            }
            max_ones = max(ones_cnt, max_ones);
        }
        return max_ones;
    }
};