/*Link: https://leetcode.com/problems/water-bottles/description/?envType=daily-question&envId=2024-07-07
Input: numBottles = 9, numExchange = 3
Output: 13
Explanation: You can exchange 3 empty bottles to get 1 full water bottle.
Number of water bottles you can drink: 9 + 3 + 1 = 13.
*/
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int total=numBottles;
        while(numBottles>=numExchange){
            total+=numBottles/numExchange;
            numBottles= (numBottles/numExchange)+(numBottles%numExchange);
        }
        return total;
    }
};
