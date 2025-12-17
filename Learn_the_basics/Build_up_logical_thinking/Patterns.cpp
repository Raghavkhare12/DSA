#include <bits/stdc++.h>
using namespace std;

void print1(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void print2(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<< endl;
    }
}
void print3(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<j+1<<" ";
        }
        cout<< endl;
    }
}
void print4(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<i+1<<" ";
        }
        cout<< endl;
    }
}
void print5(int n){
    for (int i=0;i<=n;i++){
        for (int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<< endl;
    }
}
void print6(int n){
    for (int i=0;i<=n;i++){
        for (int j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        cout<< endl;
    }
}
void print7(int n) {
    for (int i = 1; i <= n; i++) {
        for (int s=0;s<n-i; s++) {
            cout << " ";
        }
        for (int j=0;j<2*i-1;j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void print8(int n) {
    for (int i = n; i >= 1; i--)  {
        for (int s=0;s<n-i; s++) {
            cout << " ";
        }
        for (int j=0;j<2*i-1;j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void print9(int n) {
    for (int i = 1; i <= n; i++) {
        for (int s=0;s<n-i; s++) {
            cout << " ";
        }
        for (int j=0;j<2*i-1;j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)  {
        for (int s=0;s<n-i; s++) {
            cout << " ";
        }
        for (int j=0;j<2*i-1;j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void print10(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j=0;j<i;j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)  {
        for (int j=0;j<i-1;j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void print11(int n) {
    int start = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void print12(int N) {
    // Initial number of spaces in the first row
    int spaces = 2 * (N - 1);
    
    // Outer loop for the number of rows
    for (int i = 1; i <= N; i++) {
        
        // Inner loop to print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        // Inner loop to print spaces in the middle
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        
        // Inner loop to print numbers in decreasing order
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        
        // Move to the next line after printing the row
        cout << endl;
        
        // Decrease spaces by 2 after each row
        spaces -= 2;
    }
}

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        print12(n);
    }
}
