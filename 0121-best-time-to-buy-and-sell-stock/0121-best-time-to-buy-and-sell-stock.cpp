class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int maxPro=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            int currentPro=prices[i]-min;
            if(currentPro>maxPro){
                maxPro=currentPro;
            }
        }
        return maxPro;

    }
};