/*Link: https://leetcode.com/problems/three-consecutive-odds/description/?envType=daily-question&envId=2024-07-01
Example 1:

Input: arr = [2,6,4,1]
Output: false
Explanation: There are no three consecutive odds*/

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        int cnt=0;
       for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            cnt++;
            if(cnt==3){
                return true;
            }
        }else{
            cnt=0;
        }
       }
       return false;
    }
};
