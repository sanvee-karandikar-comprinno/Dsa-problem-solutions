Problem : Reverse a string.
You are given a string and your task is to reverse the string.

Constraints :
1<=s.size()<=10^6
s contains only alphabetic characters(both uppercase and lowercase).

Code :
class Solution {
public:
string reverseString(string &s) {
       reverse(s.begin(),s.end());
       return s;
     }
};
