class Solution {
public:
    string clearDigits(string s) {
        string result = ""; //use string as a stack

        for(char &ch: s){
            if(isdigit(ch) && !result.empty())result.pop_back();
            else result.push_back(ch);
        }
        return result;
    }
};