/*Link: https://leetcode.com/problems/self-dividing-numbers/description/
Example 1:

Input: left = 1, right = 22
Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]
Example 2:

Input: left = 47, right = 85
Output: [48,55,66,77]*/

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        
        for(int i=left;i<=right;++i){
           int temp=i;
           bool isSelfDividing=true;
           while(temp>0){
            int digit=temp%10;
            if(digit==0 || i%digit!=0){
                isSelfDividing=false;
                break;
            }
            temp/=10;
           }
           if(isSelfDividing){
            ans.push_back(i);
           }
            
        }
        return ans;
    }
};
  
