/*
    Write a function that takes three values x,y,z as parameters and returns
    x ^ y, y ^ z, z ^ x. Take x, y and z as input from the user and print the
    values returned by the function.
    Hint: The function takes two parameters and returns one value. So, you have
    to call the function thrice. You can also use pow() function.
*/
#include <iostream>
#include <cmath>
using namespace std;

int calculatePOW(int x, int y) {
    return pow(x, y);
}

int main() {
    int x, y, z;
    
    cout << "Enter the value of x: ";
    cin >> x;
    
    cout << "Enter the value of y: ";
    cin >> y;
    
    cout << "Enter the value of z: ";
    cin >> z;
    
    int result1 = calculatePOW(x, y);
    int result2 = calculatePOW(y, z);
    int result3 = calculatePOW(z, x);
    
    cout << "x ^ y = " << result1 << endl;
    cout << "y ^ z = " << result2 << endl;
    cout << "z ^ x = " << result3 << endl;
    
    return 0;
}
