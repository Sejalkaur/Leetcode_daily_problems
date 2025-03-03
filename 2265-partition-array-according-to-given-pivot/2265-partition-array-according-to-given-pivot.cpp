class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        int cntLess = 0;
        int cntEqual = 0;

        vector<int> result(n);
        for(int i = 0; i < n; i++){
            if(nums[i] < pivot)cntLess++;
            else if (nums[i] == pivot)cntEqual++;
        }

        int i = 0;
        int j = cntLess;
        int k = cntLess + cntEqual;

        for(int num : nums){
            if(num < pivot){
                result[i] = num;
                i++;
            }
            else if(num == pivot){
                result[j] = num;
                j++;
            }else{
                result[k] = num;
                k++;
            }
        }
        return result;

    }
};