class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
       int low=0;
       int high=n;
       int mid;
       if(target>nums[high-1]){
            return high;
        }
       while(low<=high){
        mid=low+(high-low)/2;
        if(target==nums[mid]){
            return mid;
        }
        if(nums[mid]>target ){
            high=mid-1;
        }else{
            low=mid+1;

        }
        
       }
       return low;
    }
};