class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.length();
        int minOp = INT_MAX;
        int cntW = 0;

        //count W in first window
        for(int i = 0; i < k ;i++){
            if(blocks[i] == 'W')cntW++;
        } 
        minOp = cntW;

        //slide the window across string
        for(int i = k; i < n; i++){
            if(blocks[ i - k] == 'W')cntW--;

            if(blocks[i] == 'W')cntW++;

            minOp = min(minOp, cntW);
        }

        return minOp;
    }
};