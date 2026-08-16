#include<stdio.h>
struct student{
    int roll;
    char name[20];
    float marks;
};
int main(){
    struct student s1;
    struct student *p;
    p=&s1;
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
   
    printf("Name: %s\n", p->name);
    printf("Marks: %.2f\n", p->marks);
     printf("Roll: %d\n", p->roll);
    return 0;
}