class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long currWindowSum = 0;
        long long result = 0;

        unordered_set<int> st;

        int left = 0;
        int right = 0;
        while( right < n){
            //Check if nums[j] is alreday present in the set[i...j]
            while(st.count(nums[right])){
                currWindowSum -= nums[left];
                st.erase(nums[left]);
                left++;
            }

            currWindowSum += nums[right];
            st.insert(nums[right]);

            if(right - left + 1 == k){
                result = max(result, currWindowSum);
                currWindowSum -= nums[left];
                st.erase(nums[left]);
                left++;
            }
            
            right++;
            
        }
        return result;
    }
};