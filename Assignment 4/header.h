class Teacher
{
private:
    int staff_id;
    char union_membership;
    float workload;

public:
//Constructor
    Teacher(int id, char member, float work);
//Return Staff_id
    int getID();
//Return Union_membership
    char getMembership();
//Return Workload
    float getWorkload();
//Combine Teachers
    Teacher combineTeachers(Teacher t);
//Print out to screen
    void printTeacher();
};
