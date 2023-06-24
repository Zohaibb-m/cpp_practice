// Write a program to ask user for three inputs and print 
// the one which is highest among them
// Don't use more than 2 if statements

#include <iostream>
using namespace std;

int main(){
    int num1 , num2 , num3;
    cout << "Enter three numbers:";
    cin >> num1 >> num2 >> num3 ;
    int largest = num1;
    if(num2 > largest){
        largest = num2;
    }
    if(num3 > largest){
        largest = num3;
    }
    cout << "The Largest Number is:" << largest << endl;
    return 0;
}
