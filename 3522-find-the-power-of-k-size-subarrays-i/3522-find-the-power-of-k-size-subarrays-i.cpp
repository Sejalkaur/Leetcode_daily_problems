class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
    vector<int> result(n - k + 1, -1);

    for (int i = 0; i < n - k + 1; i++) {
        bool isConsecutive = true;
        for (int j = i + 1; j < i + k; j++) {
            if (nums[j] != nums[j - 1] + 1) {
                isConsecutive = false;
                break;
            }
        }
        if (isConsecutive) {
            result[i] = nums[i + k - 1];
        }
    }

    return result;
    }
};