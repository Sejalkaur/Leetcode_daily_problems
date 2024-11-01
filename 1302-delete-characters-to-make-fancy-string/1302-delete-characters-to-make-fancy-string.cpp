class Solution {
public:
    string makeFancyString(string s) {
        int n = s.length();
        string result = "";
        result.push_back(s[0]);
        int freq = 1;
        for(int i = 1; i < n; i++){
            if(s[i] == result.back()){
                result.push_back(s[i]);
                freq++;
                if(freq >= 3){
                    result.pop_back();
                }
                
            }
            else{
                result.push_back(s[i]);
                freq = 1;
                }
        }
        return result;
    }
};