#include<iostream>
#include<climits>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        int rev=0;
        int org=x;
        while (x!=0){
            int digit=x%10;
            if (rev > INT_MAX /10 || rev < INT_MIN/10){
                return 0;
            }
            rev=rev*10 + digit;
            x/=10;}
        return rev==org;}
};
int main() {
    Solution sol;
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if (sol.isPalindrome(x))
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    return 0;
}
