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