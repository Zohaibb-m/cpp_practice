//Take 5 numbers from user and then print in the array.
#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    cout << "Enter 5 Numbers: " << endl;
    
    for ( int i = 0; i < 5; i++ ){
        cin >> numbers[i];
    }
    cout << "The Numbers are: " << endl;
    
    for ( int n = 0; n < 5; n++ ){
        cout << numbers[n] << " ";
    }
    
    return 0;
}