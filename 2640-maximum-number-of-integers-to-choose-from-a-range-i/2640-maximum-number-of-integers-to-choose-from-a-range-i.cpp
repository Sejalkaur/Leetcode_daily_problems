class Solution {
public:
    
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int sum = 0;
        int count = 0;

        unordered_set<int> bannedSet(banned.begin(), banned.end());
        for(int i = 1; i <= n; i++){
            if(bannedSet.find(i) == bannedSet.end()){ //not banned
                if(sum + i > maxSum)break;
                sum += i;
                count++;
            }
        }
        return count;
    }
};