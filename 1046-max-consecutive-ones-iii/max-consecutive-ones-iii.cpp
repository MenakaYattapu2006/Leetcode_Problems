class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int max_ones = 0, zero_cnt = 0;
        int left = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                zero_cnt++;
            }
            while(zero_cnt > k){
                if(nums[left] == 0){
                    zero_cnt--;
                }
                left++;
            }
            max_ones = max(max_ones, i-left+1);
        }
        return max_ones;
    }
};