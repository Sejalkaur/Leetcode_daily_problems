//Link: https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/description/
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n=seats.size();
        int count=0;
        sort(students.begin(), students.end());
        sort(seats.begin(), seats.end());
        for(int i=0;i<n;i++){
            int diff=students[i]-seats[i];
            if(diff<0){
                diff=diff*(-1);
            }
            count+=diff;
        }
        return count;
    }
};
