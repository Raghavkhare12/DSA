#include<iostream>
using namespace std;
class Solution {
  public:
    void printNumbers(int current, int n){
        if(current>n){
            return;
        }
        cout<<current<<'\n';
        printNumbers(current+1, n);
    }
};
int main(){
    int n;
    cin>>n;
    Solution sol;
    sol.printNumbers(1,n );
}