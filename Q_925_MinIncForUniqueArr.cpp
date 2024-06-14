//Link: https://leetcode.com/problems/minimum-increment-to-make-array-unique/submissions/1288362485/
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                ans+=nums[i-1]-nums[i]+1;
                nums[i]=nums[i-1]+1;
            }
        }
        return ans;
    }
};
