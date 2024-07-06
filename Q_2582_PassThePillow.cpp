/*Link: https://leetcode.com/problems/pass-the-pillow/description/
Example 1:

Input: n = 4, time = 5
Output: 2
Explanation: People pass the pillow in the following way: 1 -> 2 -> 3 -> 4 -> 3 -> 2.
After five seconds, the 2nd person is holding the pillow.*/

class Solution {
public:
    int passThePillow(int n, long long time) {
        int idx=1;
        int dir=1;//LToR
        while(time!=0){
            if(idx+dir>=1 && idx+dir<=n){
                idx+=dir;
                time--;
            }else{
                dir*=-1;
            }
        }
        return idx;
    }
};

/*vector<int> arr;
        for(int i=1;i<n;i++){
            arr.push_back(i);
        }
        while(time>0){
            int i=0;
            i++;
            time--;
            if(i==(n-1)){
                i--;
            }
            return arr[i];
        }
            return 0;
            */
