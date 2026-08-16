#include<stdio.h>
int main(){
    struct student{
        int roll;
        char name[20];
        float marks;
    }
    struct student s1,s2,s3[10];
    int roll;
    int marks;
    char name[20];
    printf("enter the roll number: ");
    scanf("%d",&s1.roll);
    printf("enter the name: ");
    scanf("%s",s1.name);
    printf("enter the marks: ");
    scanf("%f",&s1.marks);
    printf("roll number: %d\n",s1.roll);
    printf("name: %s\n",s1.name);
    printf("marks: %.2f\n",s1.marks);
    return 0;
}

s3[0].roll=1;
s3[0].marks=90.5;
s3[0].name="John";