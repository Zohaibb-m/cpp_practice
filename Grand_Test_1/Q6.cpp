/*
    Write a function to take input from user and print a kite out of it.
    Sample Input:
    Enter n: 5
    Sample Output:
        *
      * * *
    * * * * *
    * * * * *
      * * *
        *
*/
#include <iostream>
using namespace std;

void printKite(int n) {
    int mid = n / 2 + 1;

    for (int i = 1; i <= mid; i++) {
        for (int j = 1; j <= mid - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << " * ";
        cout << endl;
    }

    for (int i = mid - 1; i >= 1; i--) {
        for (int j = 1; j <= mid - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << " * ";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printKite(n);
    return 0;
}
