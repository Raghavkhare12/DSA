//READ MORE OPTIMAL SOLUTION FROM ARTICLE
#include<iostream>
class Solution {
public:
    int GCD(int n1,int n2) {
        if (n1 == 0) return abs(n2);
        if (n2 == 0) return abs(n1);
        n1 = abs(n1);
        n2 = abs(n2);

        int min = (n1 < n2) ? n1 : n2;
        int common_factor=1;
        for(int counter=1;counter<=min;counter++){
            if(n1%counter==0 && n2%counter==0){
                common_factor=counter;
            }      
        }        
        return common_factor;      
    }
};
int main(){
    int n1, n2;
    std::cout<<"n1:"<<" n2:";
    std::cin>>n1>>n2;
    Solution sol;
    std::cout<<sol.GCD(n1,n2);

return 0;
}