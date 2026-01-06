Why 3 loops is CORRECT here

Constraints (from LeetCode):

3 ≤ arr.length ≤ 100


So worst case:

100 × 100 × 100 = 1,000,000 checks


✅ Safe
✅ Fast
✅ Accepted
| Operations        | Result     |
| ----------------- | ---------- |
| 10⁵ (1 lakh)      | Very fast  |
| 10⁶ (10 lakh)     | Fast       |
| **10⁷ (1 crore)** | ✅ Safe     |
| 10⁸ (10 crore)    | ⚠️ Risky   |
| 10⁹ (100 crore)   | ❌ Too slow |
🔍 Apply to YOUR problems
Your triplet problems
n ≤ 100
3 loops → 100 × 100 × 100 = 1,000,000


👉 1 million checks

Compare:

1,000,000 < 10,000,000  ✅


So:
✔ Runs easily
✔ No optimization needed

🎯 One-line Interview Answer

A computer can safely handle around 10 million operations per second, and this solution performs only about 1 million checks.
code :
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(abs(arr[i]-arr[j])<=a && abs(arr[j]-arr[k])<=b && abs(arr[i]-arr[k])<=c){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
