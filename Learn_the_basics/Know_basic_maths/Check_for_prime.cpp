#include<iostream>
using namespace std;
class Solution {
public:
    bool isPrime(int n) {
        int a;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                a=0;
            }
            else a=1;
        }
    return a==1;  
    }
};
int main(){
    int n;
    cin>>n;
    Solution sol;
    cout<<sol.isPrime(n); 
    return 0;

}