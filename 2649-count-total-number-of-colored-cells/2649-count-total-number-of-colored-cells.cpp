class Solution {
public:
    long long coloredCells(int n) {
        if(n == 1)return 1;
        long long cells = 1;
        while(n > 0){
            cells += 4 * (n - 1);
            n--;
        }
        return cells;
    }
};