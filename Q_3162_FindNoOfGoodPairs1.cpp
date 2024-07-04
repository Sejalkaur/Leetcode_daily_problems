/*link: https://leetcode.com/problems/find-the-number-of-good-pairs-i/description/
Example 1:

Input: nums1 = [1,3,4], nums2 = [1,3,4], k = 1

Output: 5

Explanation:

The 5 good pairs are (0, 0), (1, 0), (1, 1), (2, 0), and (2, 2).*/

class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();
        int cnt=0; 
        int m=nums2.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]%(nums2[j]*k)==0){
                    cnt++; 
                }
            }
            
        }
        return cnt;
    }
};
