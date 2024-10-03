class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
       int n = nums.size();
        
        // Handle edge case where array is empty
        if (n == 0) {
            return -1;  // No valid subarray can be removed
        }

        long totalSum = 0;

        // Step 1: Calculate total sum of the array
        for (int num : nums) {
            totalSum += num;
        }

        // Step 2: Find remainder when totalSum is divided by p
        int remainder = totalSum % p;
        if (remainder == 0) {
            return 0;  // No need to remove anything, already divisible
        }

        // Step 3: Use a hashmap to track prefix sums modulo p
        unordered_map<int, int> prefixMap;  // Stores prefix mod p and its index
        prefixMap[0] = -1;  // For handling cases where removing prefix itself works
        long prefixSum = 0;
        int minLength = n;

        // Step 4: Traverse the array and calculate prefix sums
        for (int i = 0; i < n; ++i) {
            prefixSum += nums[i];
            int currentMod = prefixSum % p;
            if (currentMod < 0) currentMod += p;  // Handle negative modulo

            // Calculate the required mod value to match the target remainder
            int targetMod = (currentMod - remainder + p) % p;

            // Check if this mod value exists in the prefixMap
            if (prefixMap.find(targetMod) != prefixMap.end()) {
                int subarrayLength = i - prefixMap[targetMod];
                minLength = min(minLength, subarrayLength);
            }

            // Store the current prefix sum mod p in the map
            prefixMap[currentMod] = i;
        }

        // Return result
        return (minLength == n) ? -1 : minLength;
    }
};