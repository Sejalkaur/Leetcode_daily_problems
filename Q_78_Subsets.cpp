/*Link: https://leetcode.com/problems/subsets/description/
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
recursion*/

class Solution {
public:
    vector<vector<int>> result;
    void solve(int i ,vector<int>& nums,vector<int>& temp){
        if(i>=nums.size()){
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);//take
        solve(i+1, nums, temp);
        temp.pop_back();//not-take;
        solve(i+1, nums, temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        solve(0, nums, temp);
        return result;
    }
};
