class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int remove=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){  //voilation means - atmost one lement removed
                remove++; 
            }
                if(remove>1){
                return false;
            }
            if(i>1 && nums[i]<=nums[i-2]){ // prevoius element removed
                nums[i]=nums[i-1];
            }
        }
        return true;
    }
};

approach : greedy+ one pass(counter)
5️⃣ Classic Problems Using SAME Greedy Pattern 🔥
Problem	Greedy Action
Remove One Element to Make Array Increasing	Fix violation immediately
Non-decreasing Array (LeetCode 665)	Same logic
Valid Parentheses with One Removal	Counter + local fix
Almost Sorted Array	One-pass correction
String with One Deletion Palindrome	Two-pointer greedy
6️⃣ Interview Rule (MEMORIZE THIS)

If the problem says “at most one change” + array order → GREEDY

7️⃣ One-Line Memory Trick 🧠

“Count violations. If more than allowed → false.
Fix locally using neighbors.”
