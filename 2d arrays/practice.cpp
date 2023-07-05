#include<iostream>
using namespace std;
void display( int m[5]){
    int i;
    cout << "Displaying marks: " << endl;
    for ( i = 0; i < 5; i++){
        cout << "Student " << i + 1 << ": " << m[i] << " marks" << endl;
    }
}
int main(){
    int marks[5] = {50, 40, 89, 76, 63};
    display(marks);
    return 0;
}