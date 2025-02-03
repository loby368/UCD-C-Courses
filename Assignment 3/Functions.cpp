#include <iostream>
#include "header.h"
using namespace std;

teacher newTeacher(int ID, char membership, float workload)
{
    teacher t;
    t.staff_id = ID;
    t.union_membership = membership;
    t.workload = workload;

    return t;
}

void printTeacher(teacher t)
{
    cout << "\nStaff ID: " << t.staff_id;
    cout << "\nUnion Membership: " << t.union_membership;
    cout << "\nWorkload: " << t.workload;
}

teacher combineTeachers(teacher t1, teacher t2)
{
    float avgWorkload, sumWorkload;
    sumWorkload = t1.workload + t2.workload;
    avgWorkload = sumWorkload/2;

    teacher Teacher3 = newTeacher( -1, 'X', avgWorkload);//Dummy values for first two fields

    return Teacher3;
}

void greaterThan(teacher t1, teacher t2)
{
    cout << "\n\n";

    if (t1.workload > t2.workload)
    {
        cout << "Teacher 1 is greater than Teacher 2";
    }
    else if (t1.workload == t2.workload)
    {
        if (t1.staff_id > t2.staff_id)
        {
            cout << "Teacher 1 is greater than Teacher 2";
        }
        else if (t2.staff_id > t1.staff_id)
        {
            cout << "Teacher 2 is greater than Teacher 1";
        }
        else
        {
            cout << "The teachers are equal";
        }
    }
    else //t2 is greater
    {
        cout << "Teacher 2 is greater than Teacher 1";
    }

    cout << "\n";
}
