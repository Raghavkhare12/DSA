#include<iostream>
using namespace std;
class Solution{	
	public:
		int N_numbers_Sum(int n){
            if(n==1){
                return 1;
            }
            return n + N_numbers_Sum(n-1);
        } 
};
int main(){
    int n;
    cin>>n;
    Solution sol;
    cout<<sol.N_numbers_Sum(n);
}