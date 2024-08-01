class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
       for(const std::string& detail : details){

        int age = std::stoi(detail.substr(11, 2));
        if(age>60){
            count++;
        }
       }
        return count;
    }
};