//USE THESE HEADERS IN INTERVIEWS, NOT #INCLUDE<BITS/STDC++.H>. it can lead to error
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <cctype>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(),[](char c) { return !isalnum(c); }), s.end());
        for (char &c : s) {
            c = tolower(c);
        }
        string original = s;
        int i = 0, j = s.length() - 1;
        while (i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return original == s;
    }
};
int main() {
    Solution sol;
    string s;
    getline(cin, s);
    cout << (sol.isPalindrome(s) ? "Palindrome" : "Not Palindrome");
    return 0;
}
