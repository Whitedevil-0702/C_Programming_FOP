#include <stdio.h>
int main()
{
    struct students
    {
        char name[20];
        int roll_no;
        float m1,m2;
    } s[3];
    int i;
    int result;
    for (i=0; i<3; i++)
    {
        printf("Enter name, roll number and marks of student %d: ", i+1);
        scanf("%s %d %f %f", s[i].name, &s[i].roll_no, &s[i].m1, &s[i].m2);
    }

    for (i=0; i<3; i++)
    {
        result = (s[i].m1 + s[i].m2) / 2;
        printf("Student %d: Name: %s, Roll No: %d, Average Marks: %.2f\n", i+1, s[i].name, s[i].roll_no, result);
    }
    return 0;
}