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
    cout << "Create 2 new teacher profiles" << "\n\nTeacher 1" << "\n\tTeacher ID: ";
    cin >> t1_ID;
    cout <<"\tUnion Membership(Y/N): ";
    cin >> t1_membership;
    cout << "\tWorkload: ";
    cin >> t1_workload;

    //Teacher 2
    cout << "\nTeacher 2" << "\n\tTeacher ID: ";
    cin >> t2_ID;
    cout <<"\tUnion Membership(Y/N): ";
    cin >> t2_membership;
    cout << "\tWorkload: ";
    cin >> t2_workload;

    //Create 2 new Teachers
    teacher Teacher1 = newTeacher(t1_ID, t1_membership, t1_workload);
    teacher Teacher2 = newTeacher(t2_ID, t2_membership, t2_workload);

    //Print out to screen
    cout << "\n---------------------TEST-------------------------";
    cout << "\n\nTeacher 1";
    printTeacher(Teacher1);
    cout << "\n\nTeacher 2";
    printTeacher(Teacher2);

    //Determine which is greater
    greaterThan(Teacher1, Teacher2);

    //Print combination of teachers
    teacher Teacher3 = combineTeachers(Teacher1, Teacher2);
    cout << "\nThe combination of Teacher 1 and Teacher 2 is as follows:";
    printTeacher(Teacher3);

    cout << "\n";
    return 0;
}
