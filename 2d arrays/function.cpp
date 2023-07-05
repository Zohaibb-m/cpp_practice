// Function to add subtract multiply divide, two three four matrices
#include<iostream>
using namespace std;
int main(){
    int i, j, a[10][10], b[10][10], c[10][10], d[10][10], e[10][10], f[10][10], n, m;
    cout<<"Enter the number of rows and columns for matrix : ";
    cin>> n >> m;
    cout<< "Enter the elements of matrix A: \n";
    for( i = 0; i < n; i++){
        for( j = 0; j < m; j++){
            cin >> a [i] [j];
        }
    }
    cout<< "Enter the elements of matrix B: \n";
    for( i = 0; i < n; i++){
        for( j = 0; j < m; j++){
            cin >> b [i] [j];
        }
    }
    for( i = 0; i < n; i++){
        for (j = 0 ; j < m; j++) {
            c [i] [j] = a [i] [j] + b [i] [j];
            d [i] [j] = a [i] [j] - b [i] [j];
            e [i] [j] = a [i] [j] * b [i] [j];
            f [i] [j] = a [i] [j] / b [i] [j];
        } 
    }
    
    cout << "\n The Matrix C = A+B is : \n";
    for( i = 0; i < n; i++){
        for (j = 0 ; j < m; j++) {
            cout << c [i] [j] << "\n";
        }
    }
    cout << "\n The Matrix D = A-B is : \n";
    for( i = 0; i < n; i++){
        for (j = 0 ; j < m; j++) {
            cout << d [i] [j] << "\n";
        }
    }
    cout << "\n The Matrix E = A*B is : \n";
    for( i = 0; i < n; i++){
        for (j = 0 ; j < m; j++) {
            cout << e [i] [j] << "\n";
        }
    }
    cout << "\n The Matrix F = A/B is : \n";
    for( i = 0; i < n; i++){
        for (j = 0 ; j < m; j++) {
            cout << f [i] [j] << "\n";
        }
    }
    return 0;
}