nums.length ≤ 100
3 loops
→ 100 × 100 × 100 = 1,000,000
→ runs instantly

nums.length ≤ 10^5 
optimized solution

| Loops   | Max operations |
| ------- | -------------- |
| 1 loop  | 100            |
| 2 loops | 10,000         |
| 3 loops | 1,000,000      |
| 4 loops | 100,000,000 ❌  |

Step 3️⃣ Compare with computer limit

Safe limit ≈ 10 million operations

1,000,000 < 10,000,000 ✅


So 3 loops is OK

code :
class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]!=nums[j] && nums[i]!=nums[k] &&
                    nums[j]!=nums[k]){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
