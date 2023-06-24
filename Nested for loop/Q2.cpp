// Q2. 
// n=5
// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    n = 5;
    for(i = 1; i <= n; i++)  //loop to print the number in a row
    {
        cout << "\n" ;
        for( j=n-i+1; j>0; j--)             //loop to print the reverse numbers in a row
        {
            cout << j ;  
        }
    }
    return 0;
}