//CAN ALSO BE DONE THROUGH N%10 LAST DIGIT METHOD
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Solution {
public:
    bool isArmstrong(int n) {
        string num=to_string(n);
        int len=num.length();
        int result=0;
        for(int i=0;i<len;i++){
            int digit = num[i] - '0';
            result+=pow(digit, len);

        }
    return result==n;
    }
};
int main(){
    Solution sol;
    int n;
    cin>> n;
    cout<<sol.isArmstrong(n);
    return 0;
}