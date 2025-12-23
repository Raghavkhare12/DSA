#include<iostream>
using namespace std;
class Solution {
  public:
    void printNumbers(int n){
        if(n<1){
            return;
        }   
        cout<<n<<'\n';
        printNumbers(n-1);
    }
};
int main(){
    int n;
    cin>>n;
    Solution sol;
    sol.printNumbers(n);
}