class Solution {
public:
bool isVowel(string &s){
    int i =0;
    int n = s.length();
    if((s[0] == 'a' || s[0]== 'e'  || s[0] == 'i'  || s[0]== 'o'   || s[0] == 'u'  )&& (s[n - 1] == 'a'  || s[n - 1] == 'e' || s[n - 1] == 'i'  || s[n - 1] == 'o'  || s[n - 1] == 'u' ))return 1;

else return 0;
}
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> ans;
        vector<int> prefixSum(n +1, 0);
        for(int i = 0; i < n; i++){
            prefixSum[i +1]=prefixSum[i] + (isVowel(words[i]) ? 1 : 0);
        }
        for(const auto&query: queries){
            int li = query[0];
            int ri = query[1];
            ans.push_back(prefixSum[ri + 1] - prefixSum[li]);
        }
        return ans;
    }
};