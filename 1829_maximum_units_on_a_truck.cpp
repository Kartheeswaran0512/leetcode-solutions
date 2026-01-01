Greedy = Best choice at each step
Sorting = Tool, not rule
What is happening step-by-step
1️⃣ sort(...)

Built-in C++ function

Rearranges elements

2️⃣ boxTypes.begin(), boxTypes.end()

Means: sort all rows of the 2D array

3️⃣ a and b

a = one row → like [3,5]

b = another row → like [2,10]

4️⃣ a[1] and b[1]

a[1] → units per box of a

b[1] → units per box of b

5️⃣ a[1] > b[1]

Put the row with bigger units first

Your idea in very simple steps (same as you said)

Look at units per box

Pick the largest units first

Reduce truck size

Add units

Stop when truck is full

That’s it. Nothing more.

code:

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort( boxTypes.begin(), boxTypes.end(),[](vector<int>&a,vector<int>&b){
            return a[1]>b[1];
        });
        int totalUnits=0;
        for(int i=0;i< boxTypes.size() && truckSize>0;i++ ){
            int numberOfBoxes=boxTypes[i][0];
            int numberOfUnits=boxTypes[i][1];
            while(numberOfBoxes>0 && truckSize>0 ){
              totalUnits+=  numberOfUnits;
              numberOfBoxes--;
              truckSize--;
            }
        }
        return totalUnits;
    }
};
