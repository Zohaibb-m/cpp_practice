// Write a program which takes a string input from user. If there is 
// a letter 'a' in the string, print "Yes" else print "No"


#include<iostream>
using namespace std;
 int main(){
    string s1, s2;
    cout<<"Enter any string: " << s1;
    cin>>s1;
    s2 = "a";
    bool isFound = s1.find(s2) !=string::npos;
    if(isFound){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
 }