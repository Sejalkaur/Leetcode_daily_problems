class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int total5=0;
        int total10=0;
        
            for(int i=0;i<bills.size();i++){
                if(bills[i]==5){
                    total5++;
                }
                else if(bills[i]==10){
                    if(total5 <= 0) return false;
                    total5--;
                    total10++;
                }
                else if(bills[i]==20){
                    if(total10>0 && total5>0){
                        total10--;
                        total5--;
                    }else if(total5>=3){
                        total5=total5-3;
                    }else{
                        return false;
                    }
                }
            }
        return true;
    }
};