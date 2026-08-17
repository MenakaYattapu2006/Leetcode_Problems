class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt = 0, max_alt = 0;
        for(int x : gain){
            alt += x;
            max_alt = max(max_alt, alt);
        }
        return max_alt;
    }
};