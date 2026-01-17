only lowercase letter - array used 
all language (unicode,emoji etc) - hashmap

code:
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int freq[26]={0}; //array used why because suppose only lowercase letter otherwise hashmap used ok
        for(char c : s){
            freq[c-'a']++;
        }
        for(char c : t ){
            freq[c-'a']--;
        }

        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
    }
};
