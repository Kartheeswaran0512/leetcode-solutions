Criteria    | Best            |
| ----------- | --------------- |
| Time        | `vector<bool>`  |
| Space       | `vector<bool>`  |
| Simplicity  | `vector<bool>`  |
| Flexibility | `unordered_set` |

🎯 Interview Recommendation

Say this confidently 👇

“Because values are limited to -100 to 100, I used a boolean array for constant-time checks and better performance than a hash set.”

That answer = strong signal 💯

pattern - greddy + uniquess pattern

When should you use set instead?

Use set / unordered_set when:

Values are very large (like 10^9)

Range is unknown

Values are strings or objects

brute force only posituve element but what i do negative element so go to optimized solution

code:
class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n=nums.size();
        int maxelement=nums[0];
        int sum=0;
       vector<bool>used(201,false); //-100 to 100 why array indexing faster but slow set used for it
       for(int i : nums){
         maxelement=max(maxelement,i); // why this line suppose all element negative so give maximum element because array must not empty
         if(i>0 && !used[i+100]){
            sum+=i;
            used[i+100]=true;  // like set push the element unique value
         }
       }
       if(sum==0){
        return maxelement;
       }
       return sum;
    }
};
