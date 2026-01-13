
🧠 Before typing (read once, then close this)

Remember ONLY these steps — no code:

1️⃣ Find index of * in pattern
2️⃣ Build left (before *)
3️⃣ Build right (after *)
4️⃣ Scan s to find left
5️⃣ After that position, scan to find right
6️⃣ Return true / false


Example
s = "abcde"
p = "bc*e"


Expected output: true

Step 1️⃣ Find position of *

Pattern:

b  c  *  e
0  1  2  3

starPos = 2

Step 2️⃣ Split the pattern
left  = p.substr(0, starPos);
right = p.substr(starPos + 1);


So:

left  = "bc"
right = "e"

Step 3️⃣ Find left in s

String:

a  b  c  d  e
0  1  2  3  4

leftPos = s.find("bc") = 1


✔ Found

Step 4️⃣ Decide where to search for right
startSearch = leftPos + left.length();

startSearch = 1 + 2 = 3


So we search in:

"de"

Step 5️⃣ Find right after left
rightPos = s.find("e", 3);


"e" found at index 4

rightPos = 4


✔ Found after left

Step 6️⃣ Final return
return rightPos != string::npos;


✔ TRUE

What substring matched?
bcde


Pattern:

bc * e


* matched:

"d"

Final Output
true

code:
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
