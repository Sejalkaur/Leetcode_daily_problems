class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        //creating copy of an array
        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());

        //storing the rank in a map
        unordered_map<int, int> rankMap;
        int rank = 1;

        //if hasnt been assigned yet then only assign(to handle duplicates)
        for(int i = 0;i < sortedArr.size(); i++){
            if(rankMap.find(sortedArr[i]) == rankMap.end()){
                rankMap[sortedArr[i]] = rank;
                rank++;
            }
        }

        //replace the elemets with their rank
        for(int i = 0;i < arr.size(); i++){
            arr[i] = rankMap[arr[i]];
        }
        return arr;
    }
};