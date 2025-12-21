//OPTIMAL APPROACH IS TO RUN FOR LOOP FROM 1 TO ROOT(N)
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> v;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                v.push_back(i);
            }
        }
    return v;
    }
};
int main(){
    int n;
    cin>>n;
    Solution sol;
    vector<int> divisors=sol.divisors(n);
    for(int x : divisors){
        cout<<x<< " ";      
    } 
    return 0;

}