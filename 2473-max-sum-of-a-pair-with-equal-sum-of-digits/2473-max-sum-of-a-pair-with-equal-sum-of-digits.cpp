class Solution {
public:
    int SumOfDigits(int n){
        int sumD;
        while(n != 0){
                sumD += n%10;
                n /= 10;
            }
            return sumD;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int maxSum = -1;
        
        for(int i = 0; i < nums.size(); i++){
            int sumD = SumOfDigits(nums[i]);            
            if(mpp.find(sumD) != mpp.end()){ //if found
                maxSum = max(maxSum, nums[i] + mpp[sumD]);
                //updation if the current element is greater than like (18 < 36)so update
                if(nums[i] > mpp[sumD]){
                    mpp[sumD] = nums[i];
                }
            }
            else mpp[sumD] = nums[i];
        }
        return maxSum;
    }
};