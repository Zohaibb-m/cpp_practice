/*
    Do the Question no 1 using arrays.
*/
#include <iostream>
using namespace std;

const int NUM_STUDENTS = 5;
const int NUM_SUBJECTS = 2;

int main() {
    string names[NUM_STUDENTS];
    int marks[NUM_STUDENTS][NUM_SUBJECTS];

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << "Enter the name of the student" << i+1 << ": ";
        cin >> names[i];

        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            cout << "Enter the marks of " << names[i] << " in Subject " << j+1 << ": ";
            cin >> marks[i][j];
        }
    }
    cout << "Name\tEnglish\tMaths" << endl;
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << names[i] << "\t" << marks[i][0] << "\t" << marks[i][1] << endl;
    }
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        float average = (marks[i][0] + marks[i][1]) / 2.0;
        cout << "Average marks of " << names[i] << " is " << average << endl;
    }
    int maxEnglish = marks[0][0];
    int maxMaths = marks[0][1];
    string topEnglishStudent = names[0];
    string topMathsStudent = names[0];

    for (int i = 1; i < NUM_STUDENTS; ++i) {
        if (marks[i][0] > maxEnglish) {
            maxEnglish = marks[i][0];
            topEnglishStudent = names[i];
        }

        if (marks[i][1] > maxMaths) {
            maxMaths = marks[i][1];
            topMathsStudent = names[i];
        }
    }

    cout << "\nHighest marks in English is " << maxEnglish << " by " << topEnglishStudent << endl;
    cout << "Highest marks in Maths is " << maxMaths << " by " << topMathsStudent << endl;

    return 0;
}
