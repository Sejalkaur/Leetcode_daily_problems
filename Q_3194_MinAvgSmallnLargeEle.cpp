/*Link: https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/description/
Example 1:

Input: nums = [7,8,3,4,15,13,4,1]

Output: 5.5

Explanation:

step	nums	averages
0	[7,8,3,4,15,13,4,1]	[]
1	[7,8,3,4,13,4]	    [8]
2	[7,8,4,4]	          [8,8]
3	[7,4]	              [8,8,6]
4	[]	                [8,8,6,5.5]
The smallest element of averages, 5.5, is returned.*/

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int time=n/2;
        int s=0;
        int e=n-1;
        vector<double> avg;
        while(s<=e){
            
            double avge=double(nums[s]+nums[e])/2;
            avg.push_back(avge);
            s+=1;
            e-=1;
            time-=1;
        }
        sort(avg.begin(), avg.end());
        
        return avg[0];
    }
};
