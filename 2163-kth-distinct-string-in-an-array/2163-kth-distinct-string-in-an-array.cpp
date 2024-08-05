class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> frequency;
        vector<string> temp;
        int n=arr.size();
        for(const auto& elem: arr){
        frequency[elem]++;
        }

        for(const auto& elem: arr){
            if(frequency[elem]==1){
                temp.push_back(elem);
            }
            
        }
        if(k<=temp.size()){
        return temp[k-1];
        }else{
            return "";
        }
    }
};