//Link: https://leetcode.com/problems/intersection-of-two-arrays/submissions/1290068729/?envType=daily-question&envId=2024-06-16
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int> st1(begin(nums1), end(nums1));
       vector<int> result;
       for(int &num: nums2){
        if(st1.find(num)!=st1.end()){
            result.push_back(num);
            st1.erase(num);
        }
       }
       return result;
    }
};
