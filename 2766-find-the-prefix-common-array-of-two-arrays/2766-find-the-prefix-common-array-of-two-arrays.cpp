class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans(A.size());
        int cnt = 0;
        unordered_map<int, int> freq;
        for(int i = 0;i <A.size();i++){
                freq[A[i]]++;
                freq[B[i]]++;
                if (freq[A[i]] == 2) cnt++;
                if(A[i] != B[i] && freq[B[i]] == 2)cnt++;
                ans[i] = cnt;
        }
        return ans;
    }
};