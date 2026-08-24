class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n+1);
        int rs = 0;
        for(int i = 0; i < n; i++){
            rs += nums[i];
            prefix[i+1] = rs;
        }
        int leftsum = 0, rightsum = 0;
        for(int i = 0; i < n; i++){
            int leftsum = prefix[i];
            int rightsum = prefix[n] - prefix[i+1];
            if(leftsum == rightsum){
                return i;
            }
        }
        return -1;
    }
};