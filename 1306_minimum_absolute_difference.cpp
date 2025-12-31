8️⃣ Pattern Used (Simple Name)

Sort + Adjacent Comparison

Very common in:

minimum difference

closest elements

interval problems

9️⃣ Mistake You Made (Important to Remember)

❌ Using nested loops unnecessarily

❌ Not realizing adjacent elements after sort are enough

❌ Trying to build answer before knowing min difference

🧠 One-Line Interview Memory

“For minimum absolute difference → sort first, compare neighbors.

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        
        int min_diff= INT_MAX;
        for(int i=1;i<n;i++){
            min_diff=min(min_diff,arr[i]-arr[i-1]);
        }
        vector<vector<int>> result;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]==min_diff){
                result.push_back({arr[i-1],arr[i]});
            }
        }
        return result;
    }
};
