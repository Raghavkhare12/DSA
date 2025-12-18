#include<iostream>
using namespace std;
int main(){
    long long num;
    cin>>num;
    int count=0;
    if(num==0){
        cout<<1;
        return 0;
    }
    while (num!=0){
        num=num/10;
        count+=1;
    }
    cout<<count;
    return 0;
}
