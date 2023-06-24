/* Q3. 
n=5
1 2 3 4 5
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5*/

#include<iostream>
using namespace std;
int main ()
{
    int i = 1;
    int j ;
    while ( i <= 5 ){       //we are assigning the rows limit to i 
        j = 1;
        while ( j <= 5 ) {  // giving the total elements in a row to j
    cout <<j;                  // printing j
    j++;                        // incrementing the value of j so it reaches 1 to 5
    }
    cout << endl;
    i++;                    // incrementing the rows
    }
    return 0;
}