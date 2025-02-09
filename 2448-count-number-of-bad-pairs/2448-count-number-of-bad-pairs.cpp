class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, int> fre;
        long long goodPair = 0, n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int key = nums[i] - i;
            goodPair += fre[key];
            fre[key]++;
        }
        
        return (n * (n - 1)) / 2 - goodPair;
    }
};