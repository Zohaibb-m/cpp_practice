// Print the following pattern for any value of n
// if n = 5
//     *
//    **
//   ***
//  ****
// *****
// *****
//  ****
//   ***
//    **
//     *
// if n = 4
//    *
//   **
//  ***
// ****
// ****
//  ***
//   **
//    *

#include<iostream>
using namespace std;

int main(){
int n, i, j;
cout << "Enter number of rows: ";
cin >> n;
    for(i = 1; i <= n; i++){
        for(j = i; j < n; j++){
                cout << " ";
        }
        for(j = 1; j <= i; j++){
            cout << "*";
        }
            cout << "\n";
    }
    for(i = n; i >= 1; i--){
        for(j = i; j <= n; j++){
            cout << " ";
        }
        for(j = 1; j < i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
            return 0;
}