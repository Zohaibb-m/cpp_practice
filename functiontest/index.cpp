// Write a function, which takes an array and a number as input.
// And return true if the number is present in the array and false if not

#include<iostream>
using namespace std;
void userInput()
{
    int num;
    int size = 5;
    int arr[size];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter any number:"<<endl;
    cin>>num;
    for(int i=0; i<size; i++){
        if(arr[i] == num){
            cout << "True" << endl;
            return;
        }
        }
        cout << "False" << endl;
    }
int main()
{
    userInput();
    return 0;
}