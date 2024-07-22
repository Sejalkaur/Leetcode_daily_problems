class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();
        //brute force
        // for(int i=0;i<heights.size();i++){
        //     for(int j=i+1;j<n;j++){
        //    if(heights[i]<heights[j]){
        //     swap(heights[i], heights[j]);
        //     swap(names[i], names[j]);
        //    }
        // }
        // }
        // return names;
        unordered_map<int, string> mapping;
        for(int i=0;i<n;i++){
            mapping[heights[i]]=names[i];//step 1 map all heights with their names
        }
        sort(heights.rbegin(), heights.rend());//descending order
        for(int i=-0;i<n;i++){
            names[i]=mapping[heights[i]];//step3 sort all the names according to the heights
        }
        return names;
    }
};