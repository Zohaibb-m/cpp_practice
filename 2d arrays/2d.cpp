#include<iostream>
using namespace std;

int main(){
    int arr[4][2] = {
        {1 , 2},
        {3 , 4},
        {5 , 6},
        {7,  8}
    };
    int i , j;
    for(i=0; i<4; i++){
        for(j=0; j<2; j++){
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
}