/*Link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/submissions/1293278324/
Input: bloomDay = [1,10,3,10,2], m = 3, k = 1
Output: 3
Explanation: Let us see what happened in the first three days. x means flower bloomed and _ means flower did not bloom in the garden.
We need 3 bouquets each should contain 1 flower.
After day 1: [x, _, _, _, _]   // we can only make one bouquet.
After day 2: [x, _, _, _, x]   // we can only make two bouquets.
After day 3: [x, _, x, _, x]   // we can make 3 bouquets. The answer is 3.*/

class Solution {
public:
    int canMakeMBouq(vector<int>& bloomDay, int mid, int k ){
        int bouqCount=0;
        int adj_count=0;
        int n=bloomDay.size();
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=mid){
                adj_count++;
            }else{
                adj_count=0;
            }
            if(adj_count==k){
                bouqCount++;
                adj_count=0;
            }
        }
        return bouqCount;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int start_day=0;
        int end_day=*max_element(begin(bloomDay), end(bloomDay));
        int min_day=-1;
        while(start_day<=end_day){
            int mid=start_day+(end_day-start_day)/2;
            if(canMakeMBouq(bloomDay, mid, k)>=m){
                min_day=mid;
                end_day=mid-1;
            }else{
                start_day=mid+1;
            }
        }
        return min_day;
    }
};
