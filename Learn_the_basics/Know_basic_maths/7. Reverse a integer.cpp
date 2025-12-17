#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int digit = x % 10;

            // Overflow check before multiplication
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
                return 0;
            }

            rev = rev * 10 + digit;
            x /= 10;
        }

        return rev;
    }
};

int main() {
    Solution sol;
    int x;

    cout << "Enter an integer: ";
    cin >> x;

    int result = sol.reverse(x);
    cout << "Reversed integer: " << result << endl;

    return 0;
}
