class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        
        //track the number of breaks in the pattern
        int breakOfPattern = 0;
        for(int i = 0; i < n-1; i++){
            if(nums[i] > nums[i+1]){
                breakOfPattern++;
            }
            
        }
        if(breakOfPattern == 0)return true; //already sorted no rotation
        if(breakOfPattern > 1 )return false; //if rotation(break = 1) ocurs then the last el should be less but if(break >1)no rotation
        if(breakOfPattern == 1 &&  nums[n-1] > nums[0])return false;
        return true;

    }
};