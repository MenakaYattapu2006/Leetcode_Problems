class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxlen = 1, currlen = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i-1]){
                currlen++;
                maxlen = max(maxlen, currlen);
            }
            else{
                currlen = 1;
            }
        }
        return maxlen;
    }
};