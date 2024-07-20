class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int m=rowSum.size();
        int n=colSum.size();
        vector<vector<int>> vec(m, vector<int> (n, 0));
        int i=0;//row
        int j=0;//col
        while(i<m && j<n){//out of bound
            vec[i][j]=min(rowSum[i], colSum[j]);//put min in the array
            rowSum[i]-=vec[i][j];//if r1 dala then r1-r1;
            colSum[j]-=vec[i][j];//c1-r1(updation)
            if(rowSum[i]==0){//if the row is done then proceed
                i++;
            }
            if(colSum[j]==0){//if the col is done then proceed
                j++;
            }

        }
        return vec;
    }
};