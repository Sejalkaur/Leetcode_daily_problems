/*Link: https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/?envType=daily-question&envId=2024-07-11
Input: s = "(u(love)i)"
Output: "iloveu"
Explanation: The substring "love" is reversed first, then the whole string is reversed.*/
class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> lastSkipLength;
        string result;
        for(char &ch: s){
            if(ch=='('){
                lastSkipLength.push(result.length());
            }else if(ch==')'){
                int l=lastSkipLength.top();
                lastSkipLength.pop();
                reverse(begin(result)+l, end(result));
            }else{
                result.push_back(ch);
            }
        }
        return result;
    }
};
