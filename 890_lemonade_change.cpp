Method used in this problem
Queue-based Greedy (State Tracking)

You can write in your notes like this:

Method: Greedy + Queue order
Technique: State tracking using counters

How to write in your notebook (recommended format)
📌 Problem: Lemonade Change

Pattern / Method:

Queue processing

Greedy choice

Counter-based state tracking

Why this method:

Customers must be served in order

Each decision depends on current money

Choose best possible change at each step

Process in order + keep counts + greedy change choice


code:
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
