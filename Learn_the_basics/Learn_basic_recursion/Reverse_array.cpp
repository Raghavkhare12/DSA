//CAN ALSO BE DONE THROUGH SWAP FUNCTION AND REVERSE FUNCTION OF STL.
#include<iostream>
using namespace std;
class Solution{
public:
    void reverse(int arr[], int n){
        int j=0;
        int rev[10000];
        for(int i=n-1; i>=0; i--){
            rev[j]=arr[i];
            j+=1;
        }
        for(int k=0; k<n; k++){
            cout<<rev[k]<<" ";
    }
}};
int main(){
    int n=4;
    int arr[]={4, 2, 3, 1};
    Solution sol;
    sol.reverse(arr, n);
    return 0;
}