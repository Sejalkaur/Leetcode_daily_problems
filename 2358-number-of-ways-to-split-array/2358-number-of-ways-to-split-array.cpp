class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long long> prefixSum(n+1, 0);
        for(int i = 0;i <n;i++){
            prefixSum [i+1] = prefixSum[i] + nums[i];
        }

        int cnt = 0;
        for(int i = 1; i< n; i++){
            if(prefixSum[i] >= prefixSum[n] - prefixSum[i])cnt++;
        }
        return cnt;
    }
};