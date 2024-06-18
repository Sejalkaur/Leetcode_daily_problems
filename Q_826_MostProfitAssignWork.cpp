/*Link: https://leetcode.com/problems/most-profit-assigning-work/?envType=daily-question&envId=2024-06-18
Example 1:

Input: difficulty = [2,4,6,8,10], profit = [10,20,30,40,50], worker = [4,5,6,7]
Output: 100
Explanation: Workers are assigned jobs of difficulty [4,4,6,6] and they get a profit of [20,20,30,30] separately.*/
class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n=difficulty.size();
        int m=worker.size();
        priority_queue<pair<int, int>> pq;  //max heap of pairs
        for(int i=0;i<n;i++){//simply put elements in the heap
            int diff=difficulty[i];
            int prof=profit[i];
            pq.push({prof, diff});
        }
        sort(begin(worker), end(worker), greater<int>()); //descending order
        int i=0;
        int totalProfit=0;
        while(i<m && !pq.empty()){
            if(pq.top().second > worker[i]){  //if difficulty then only pop
                pq.pop();
            }else{
                totalProfit+=pq.top().first;
                i++; //no popping
            }
        }
        return totalProfit;
    }
};
  
