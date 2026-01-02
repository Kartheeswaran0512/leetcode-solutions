class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0;
        for(int bill : bills){
            if(bill==5){
                five++;
            }
            else if(bill==10){
                    if(five==0) return false; // no change
                    five--;
                    ten++;
                
            }
            else{ 
            if(five>0 && ten>0){ //bill==20
                five--;  //- 10+5 change, bill=5
                ten--;
            }

        else if(five>=3){
            five=five-3; // - 5+5+5=15 change , 5 bill
        }
        else{
            return false;
        }
            }
        }
        return true;
    }
};