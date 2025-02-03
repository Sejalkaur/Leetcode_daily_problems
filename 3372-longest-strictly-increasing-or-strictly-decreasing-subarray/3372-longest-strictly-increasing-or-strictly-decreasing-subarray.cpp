class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int inc = 1, dec = 1, maxi = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                inc += 1;
                dec = 1; // Reset decreasing count
            } 
            else if (nums[i] < nums[i - 1]) {
                dec += 1;
                inc = 1; // Reset increasing count
            } 
            else {
                inc = 1; // Reset both counts on equal elements
                dec = 1;
            }
            maxi = max(maxi, max(inc, dec));
        }

        return maxi;
    }
};
