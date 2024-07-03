/*Link: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/
Example 1:

Input: nums = [1,2,3,4]

Output: 3

Explanation:

All array elements can be made divisible by 3 using 3 operations:

Subtract 1 from 1.
Add 1 to 2.
Subtract 1 from 4.*/

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%3!=0){
                cnt++;
            }
        }
        return cnt;
    }
};
