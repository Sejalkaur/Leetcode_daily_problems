class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(map.find(nums[i])!=map.end()){
                return nums[i];
            }else{
                map[nums[i]]=1;
            }
        }

        return 0;



        // int n=nums.size();
        // sort(nums.begin(), nums.end());
        // int cnt=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==nums[i+1]){
        //         return nums[i];
        //     }
        // }
        // return 0;
    }
};