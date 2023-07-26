/*
    Write a function that takes two values x,y as parameters and returns
    an integer value. The integer is the quadrant in which the point(x, y) lies.
    Take x and y as input from the user and print the quadrant in which the point lies.
    Sample Input:
    Enter x: 5
    Enter y: 6
    Sample Output:
    Quadrant 1
*/

#include <iostream>
using namespace std;

int findQuadrant(int x, int y) {
    if (x > 0 && y > 0)
        return 1;
    else if (x < 0 && y > 0)
        return 2;
    else if (x < 0 && y < 0)
        return 3;
    else if (x > 0 && y < 0)
        return 4;
    else
        return 0; 
}

int main() {
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    
    cout << "Enter y: ";
    cin >> y;
    
    int quadrant = findQuadrant(x, y);
    
    if (quadrant == 0)
        cout << "The point lies on the axes or at the origin (0,0)" << endl;
    else
        cout << "Quadrant " << quadrant << endl;

    return 0;
}
