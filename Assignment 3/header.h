struct teacher
{
    int staff_id;
    char union_membership;
    float workload;
};

//Function Prototypes
teacher newTeacher(int ID, char membership, float workload);
void printTeacher(teacher t);
teacher combineTeachers(teacher t1, teacher t2);
void greaterThan(teacher t1, teacher t2);
