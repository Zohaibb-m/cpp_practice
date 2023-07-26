/*
    A binomial series is given by the following expression:
    1 + 3 + 5 + 7 + 9 + 11 + ... + n
    Write a program to find the sum of the series.
    Sample Input:
    Enter the value of n: 13
    Sample Output:
    The sum of the series is 25
    Hint: Use a for loop and the increment operator.
*/
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int d = 2 * i - 1;
        sum += d;
    }
    cout << "The sum of the series is " << sum << endl;

    return 0;
}
