#include<stdio.h>
struct student{
    int roll;
    char name[20];
    float marks;
};
int main(){
    struct student s1[100];
    for(int i=0; i<3; i++){
        printf("Enter roll number: ");
        scanf("%d", &s1[i].roll);
        printf("Enter name: ");
        scanf("%s", s1[i].name);
        printf("Enter marks: ");
        scanf("%f", &s1[i].marks);
    }
   for(int i=0; i<3; i++){
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", s1[i].name);
        printf("Marks: %.2f\n", s1[i].marks);
        printf("Roll: %d\n", s1[i].roll);
    }
    return 0;
}