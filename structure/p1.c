#include<stdio.h>
struct student{
    int roll;
    char name[20];
    float marks;
};
int main(){
    struct student s1;
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
   
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
     printf("Roll: %d\n", s1.roll);
    return 0;
}