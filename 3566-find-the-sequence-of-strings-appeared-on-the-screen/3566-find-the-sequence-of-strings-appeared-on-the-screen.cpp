class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> ans;
        string current = "";

        for(char ch: target){
            if(current.empty()){
                current+= 'a';
                ans.push_back(current);
            }
            while(current.back() != ch){
                if(current.back() == 'z'){
                    current.back() = 'a';
                }else{
                    current.back()++;
                }ans.push_back(current);
            }
            if(ans.back() != target){
                current+='a';
                ans.push_back(current);
            }
        }
        return ans;
    }
};