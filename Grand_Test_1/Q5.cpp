/*
    Do the Question 4 using the following formula to calculate sum of binomial series:
    sum = (n/2) * (2*a + (n-1)*d)
    Suppose the series is 1 + 3 + 5 + 7 + 9 + 11 + ... + n
    where a = 1, 
    d = difference between two consecutive terms = 2
    n = number of terms
    Take n as input from the user and nothing else.
*/
#include <iostream>
using namespace std;

int main() {
    float n, a = 1, d = 2, sum = 0;
    
    cout << "Enter the value of n: ";
    cin >> n;
    
    sum = (n / 2) * (2 * a + (n - 1) * d);
    cout << "The sum of the series is " << sum << endl;

    return 0;
}