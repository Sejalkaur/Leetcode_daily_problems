/*Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/description/?envType=daily-question&envId=2024-07-02
Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        int n=nums1.size();
        int m=nums2.size();
        
sort(nums1.begin(), nums1.end());
sort(nums2.begin(), nums2.end());

        int i=0;
        int j=0;
        while(i<n && j<m){
            if(nums1[i]==nums2[j]){
                temp.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            
            else{
                j++;
            }
        }
        return temp;
    }
};
