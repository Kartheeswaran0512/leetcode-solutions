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