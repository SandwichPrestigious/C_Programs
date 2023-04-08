#include<stdio.h>

struct student
{
    int RID;
    int age;
    double marks;
    char div;
    float salary;
};

int main()
{   
    struct student obj97;
    struct student obj617;
    struct student *ptr = NULL;

    obj97.RID=97;
    obj97.age=26;
    obj97.marks=68.6564;
    obj97.div="A";
    obj97.salary= 90000;

    ptr= &obj97;
    printf("RID is :%d\n",ptr->RID);
    printf("Age is :%d\n",ptr->age);
    printf("Marks is :%d\n",ptr->marks);
    printf("Division is:%c\n",ptr->div);
    printf("Salary is:%f\n",ptr->salary);

    return 0;
}