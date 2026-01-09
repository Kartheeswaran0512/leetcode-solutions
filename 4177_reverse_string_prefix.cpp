k/2 - how many swaps
k-i-1 -  matching index from end
i - start from beginning
🔥 Interview Insight (VERY IMPORTANT)

All these problems use ONE CORE IDEA:
Left index  = i
Right index = (start + length - 1) - i
Swaps       = length / 2

code:
class Solution {
public:
    string reversePrefix(string s, int k) {
        for(int i=0;i<k/2;i++){
            swap(s[i],s[k-1-i]);
        }
        return s;
    }
};
