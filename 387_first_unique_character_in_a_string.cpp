frequnency array  - int freq[26]={0}
t/c-o(n)
s/c-o(1) - 26 lowercase letters
unordered map- o(n) 
    s/c-o(n)

code:
class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26]={0};
        for(char c : s){
            freq[c-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};
