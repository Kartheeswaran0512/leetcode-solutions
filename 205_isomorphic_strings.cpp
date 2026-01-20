class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int mpST[256];
        int mpTS[256];

        memset(mpST,-1,sizeof(mpST));
        memset(mpTS,-1,sizeof(mpTS));

        for(int i=0;i<s.length();i++){
            unsigned char c1=s[i]; // unsigned avoid negative index
            unsigned char c2=t[i];
            if(mpST[c1]==-1 && mpTS[c2]==-1){
                mpST[c1]=c2;
                mpTS[c2]=c1;
            }
            else{
                if(mpST[c1]!=c2 || mpTS[c2]!=c1){
                    return false;
                }
            }
        }
        return true;
    }
};