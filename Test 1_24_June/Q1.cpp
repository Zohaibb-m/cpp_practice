// Explain what are namespaces?
/*

A namespace is used to clarify which type of library this funtion is using so that if there are 2 or more functions
Namespaces allow us to group related functions and variables together. The best example of namespace scope is
that the C++ library (std) where all the classes, methods are declared.
So that's why while writing a C++ program we usually include the directive using namespace std.

*/

// Write a simple program which prints your name but without using the 
// line using namespace std

//Code:
#include<iostream>
int main(){
    std::cout << "My name is Sami";
    return 0;
}