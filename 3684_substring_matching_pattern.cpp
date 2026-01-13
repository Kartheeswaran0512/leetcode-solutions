class Solution {
public:
    bool hasMatch(string s, string p) {
        int star = p.find('*');

       string left = p.substr(0, star); //*before check
       string right = p.substr(star + 1); //*after check

       int leftpos = s.find(left);
       if (leftpos == string::npos) {
            return false;
        }

       int search = leftpos + left.length();
       int rightpos = s.find(right, search);

return rightpos != string::npos;

    }
};