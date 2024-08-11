class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int row=0;
        int col=0;
        for(string command: commands){
            if(command=="UP"){
                row-=1;
            }
            if(command=="DOWN"){
                row+=1;
            }
            if(command=="LEFT"){
                col-=1;
            }
            if(command=="RIGHT"){
                col+=1;
            }
        }
        int finalp=(row*n) + col;
        return finalp;
    }
};