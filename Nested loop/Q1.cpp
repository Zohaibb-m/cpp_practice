// Q1. 
// n = 5
//     1
//     11
//     111
//    1111
//    11111

#include<iostream>
using namespace std;
int main()
{
    int  s, i, j;
    int n = 5;
            //loop to print the upper diamond pattern //
    for(i = 0; i <= n; i++)
    {
        for(s = n; s > i; s--){     //loop to print spaces//
        cout << " ";}
        
        for(j=0; j<i; j++){         //loop to print "1" in a sequence//
            cout << "1 ";}
    cout << "\n";
        }
        return 0;
}