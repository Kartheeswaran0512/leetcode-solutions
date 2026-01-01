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