class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        double currSum = 0, maxAvg = INT_MIN;
        for(int right = 0; right < nums.size(); right++){
            currSum += nums[right];
            if(right >= k-1){
                maxAvg = max(currSum/k, maxAvg);
                currSum -= nums[left];
                left++;
            }
        }
        return maxAvg;
    }
};