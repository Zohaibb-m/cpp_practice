/* 
    Write a program to take the name and marks of 5 students in 2 subjects.
    Print the name and marks of each student in the two subjects
    Then print the average marks of the student and also the name of the 
    student with the highest marks in each subject.
    Sample Input:
    Enter the name of the student1:
    Enter the marks of student1 in English:
    Enter the marks of student1 in Maths:
    Enter the name of the student2:
    Enter the marks of student2 in English:
    Enter the marks of student2 in Maths:
    Enter the name of the student3:
    Enter the marks of student3 in English:
    Enter the marks of student3 in Maths:
    Enter the name of the student4:
    Enter the marks of student4 in English:
    Enter the marks of student4 in Maths:
    Enter the name of the student5:
    Enter the marks of student5 in English:
    Enter the marks of student5 in Maths:

    Sample Output (in tabular form):
    Name    English     Maths
    student1    90      75
    student2    80      85
    student3    70      75
    student4    60      65
    student5    50      95

    Average marks of student1 is 92.5
    Average marks of student2 is 82.5
    Average marks of student3 is 72.5
    Average marks of student4 is 62.5
    Average marks of student5 is 52.5

    Highest marks in English is 90 by student1
    Highest marks in Maths is 95 by student5

    Average marks in English is 70
    Average marks in Maths is 78

    Note: Don't Use Arrays. Use only variables.
*/

#include <iostream>
using namespace std;

int main() {
    string name1, name2, name3, name4, name5;
    int marks1Eng, marks1Maths;
    int marks2Eng, marks2Maths;
    int marks3Eng, marks3Maths;
    int marks4Eng, marks4Maths;
    int marks5Eng, marks5Maths;

    cout << "Enter the name of the student1: ";
    cin >> name1;
    cout << "Enter the marks of Student1 in English: ";
    cin >> marks1Eng;
    cout << "Enter the marks of Student1 in Maths: ";
    cin >> marks1Maths;

    cout << "Enter the name of the student2: ";
    cin >> name2;
    cout << "Enter the marks of Student2 in English: ";
    cin >> marks2Eng;
    cout << "Enter the marks of Student2in Maths: ";
    cin >> marks2Maths;

    cout << "Enter the name of the student3: ";
    cin >> name3;
    cout << "Enter the marks of Student3 in English: ";
    cin >> marks3Eng;
    cout << "Enter the marks of Student4 in Maths: ";
    cin >> marks3Maths;

    cout << "Enter the name of the student4: ";
    cin >> name4;
    cout << "Enter the marks of Student4 in English: ";
    cin >> marks4Eng;
    cout << "Enter the marks of Student4 in Maths: ";
    cin >> marks4Maths;

    cout << "Enter the name of the student5: ";
    cin >> name5;
    cout << "Enter the marks of Student5 in English: ";
    cin >> marks5Eng;
    cout << "Enter the marks of Student5 in Maths: ";
    cin >> marks5Maths;

    double avg1 = (marks1Eng + marks1Maths) / 2.0;
    double avg2 = (marks2Eng + marks2Maths) / 2.0;
    double avg3 = (marks3Eng + marks3Maths) / 2.0;
    double avg4 = (marks4Eng + marks4Maths) / 2.0;
    double avg5 = (marks5Eng + marks5Maths) / 2.0;

    double avgEnglish = (marks1Eng + marks2Eng + marks3Eng + marks4Eng + marks5Eng) / 5.0;
    double avgMaths = (marks1Maths + marks2Maths + marks3Maths + marks4Maths + marks5Maths) / 5.0;

    int highestEng = max(max(max(max(marks1Eng, marks2Eng), marks3Eng), marks4Eng), marks5Eng);
    int highestMaths = max(max(max(max(marks1Maths, marks2Maths), marks3Maths), marks4Maths), marks5Maths);

    cout << "\nName\tEnglish\tMaths" << endl;
    cout << name1 << "\t" << marks1Eng << "\t" << marks1Maths << endl;
    cout << name2 << "\t" << marks2Eng << "\t" << marks2Maths << endl;
    cout << name3 << "\t" << marks3Eng << "\t" << marks3Maths << endl;
    cout << name4 << "\t" << marks4Eng << "\t" << marks4Maths << endl;
    cout << name5 << "\t" << marks5Eng << "\t" << marks5Maths << endl;

    cout << "\nAverage marks of " << name1 << " is " << avg1 << endl;
    cout << "Average marks of " << name2 << " is " << avg2 << endl;
    cout << "Average marks of " << name3 << " is " << avg3 << endl;
    cout << "Average marks of " << name4 << " is " << avg4 << endl;
    cout << "Average marks of " << name5 << " is " << avg5 << endl;

    cout << "\nHighest marks in English is " << highestEng << " by " << ((highestEng == marks1Eng) ? name1 : (highestEng == marks2Eng) ? name2 : (highestEng == marks3Eng) ? name3 : (highestEng == marks4Eng) ? name4 : name5) << endl;
    cout << "Highest marks in Maths is " << highestMaths << " by " << ((highestMaths == marks1Maths) ? name1 : (highestMaths == marks2Maths) ? name2 : (highestMaths == marks3Maths) ? name3 : (highestMaths == marks4Maths) ? name4 : name5) << endl;

    cout << "\nAverage marks in English is " << avgEnglish << endl;
    cout << "Average marks in Maths is " << avgMaths << endl;

    return 0;
}
