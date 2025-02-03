#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    //Read in data to fill in new teachers
    int t1_ID, t2_ID;
    char t1_membership, t2_membership;
    float t1_workload, t2_workload;

    //Teacher 1
    cout << "Create 2 instances of the Teacher class" << "\n\nTeacher 1";
    cout << "\n\tTeacher ID: ";
    cin >> t1_ID;
    cout <<"\tUnion Membership(Y/N): ";
    cin >> t1_membership;
    cout << "\tWorkload(0.0 - 4.0): ";
    cin >> t1_workload;

    //Teacher 2
    cout << "\nTeacher 2";
    cout << "\n\tTeacher ID: ";
    cin >> t2_ID;
    cout <<"\tUnion Membership(Y/N): ";
    cin >> t2_membership;
    cout << "\tWorkload(0.0 - 4.0): ";
    cin >> t2_workload;

    //Create 2 new instances of the Teacher class
    Teacher T1(t1_ID, t1_membership, t1_workload);
    Teacher T2(t2_ID, t2_membership, t2_workload);

    cout << "\n------------------Test------------------\n";

    //Print components of each class
    cout << "\nTeacher 1:\n";
    T1.printTeacher();
    cout << "\n\nTeacher 2:\n";
    T2.printTeacher();

    //Print combination of 2 teachers
    cout << "\n\nCombined Teachers:\n";
    Teacher Tcombine = T1.combineTeachers(T2);
    Tcombine.printTeacher();

    cout << "\n";
}
