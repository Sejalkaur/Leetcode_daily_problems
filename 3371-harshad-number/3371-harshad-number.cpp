class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int ones=x%10;
        int tens=x/10;
        int val=ones+tens;
        if(x==100){
            return 1;
        }
        if(x%val==0){
            return val;
        }return -1;
    }
};