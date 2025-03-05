class Solution {
public:
    long long coloredCells(int n) {
        // 1 + 4(1 + 2 + 3...) = 1 + 4((n-1)(n-1+1)/2)
        return 1 + (2 * (long long)(n - 1) * n);
    }
};