#include<iostream>
using namespace std;

void myfunction(){
    int a, b, c, x, y;
    cout << "Enter 3 numbers:";
    cin >> a >> b >> c;
    x = b + c;
    cout << "X =" << x;
    y = a * x;
    cout << "\ny = " << y;
    cin >> y;
}

int main() {
    myfunction();
    return 0;
}