//CAN ALSO BE DONE THROUGH DYNAMIC-PROGRAMMING AND OTHER LOOPS ALSO, CHECK THE ARTICLE.
//RECURSION GIVES WORST TIME-COMPLEXITY OF O(2^N) DUE TO TWO RECURSIVE FUNCTION CALLS IN EACH ITERATION.
#include<iostream>
using namespace std;
class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        int last = fib(n-1);
        int sec_last = fib(n-2);
        return last + sec_last;
    }
};
int main(){
    int n;
    cin>>n;
    Solution sol;
    cout<<sol.fib(n);
}