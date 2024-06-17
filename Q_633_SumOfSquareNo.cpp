/*Link: https://leetcode.com/problems/sum-of-square-numbers/submissions/1290796678/?envType=daily-question&envId=2024-06-17
Example 1:

Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5*/

class Solution {
public:
    bool judgeSquareSum(int c) {
        
            long long int s=0, e=sqrt(c);
            while(s<=e){
                if(s*s>c)return false;
                if(s*s+e*e==c)return true;
                else if(s*s + e*e>c)e--;
                else s++;
            }
            return false;
    }
};
