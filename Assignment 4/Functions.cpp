#include <iostream>
#include "header.h"
using namespace std;

//Constructor
Teacher::Teacher(int id, char member, float work)
{
    staff_id = id;
    union_membership = member;
    workload = work;
}

//Return Staff_id
int Teacher::getID()
{
    return staff_id;
}

//Return Union_membership
char Teacher::getMembership()
{
    return union_membership;
}

//Return Workload
float Teacher::getWorkload()
{
    return workload;
}

//Combine Teachers
Teacher Teacher::combineTeachers(Teacher t)
{
    Teacher Tout( -1, 'X', ((workload + t.getWorkload())/2));//Dummy values for first two fields
    return Tout;
}

//Print out to screen
void Teacher::printTeacher()
{
    if (staff_id == -1)//Is staff_id a dummy value?
    {
        cout << "This Teacher is a combination of two other teachers!";
    }
    else
    {
        cout << "This is a real Teacher!";
    }

    cout << "\n\tStaff ID: " << staff_id;
    cout << "\n\tUnion Membership: " << union_membership;
    cout << "\n\tWorkload: " << workload;
}
