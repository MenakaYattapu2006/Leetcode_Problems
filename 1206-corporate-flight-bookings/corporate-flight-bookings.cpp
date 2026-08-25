class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>diff(n+1, 0);
        for(int i = 0; i < bookings.size(); i++){
            int l = bookings[i][0];
            int r = bookings[i][1];
            int val = bookings[i][2];
            diff[l-1] += val;
            diff[r] -= val;
        }
        vector<int> ans;
        int sum = 0;
        for(int i = 0; i < diff.size()-1; i++){
            sum += diff[i];
            ans.push_back(sum);
        }
        return ans;
    }
};