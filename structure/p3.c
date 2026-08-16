#include<stdio.h>
int main(){
    int i;
    struct student{
        int roll;
        char name[20];
        float marks;
    };
    struct student s1[100];
    int n,max=0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for( i=0; i<n; i++){
        printf("Enter roll number: ");
        scanf("%d", &s1[i].roll);
        printf("Enter name: ");
        scanf("%s", s1[i].name);
        printf("Enter marks: ");
        scanf("%f", &s1[i].marks);
    }
    for(i=0; i<n; i++){
        if(s1[i].marks>max){
            max=s1[i].marks;
        }
    }
    for( i=0; i<n; i++){
            if(s1[i].marks==max){
                printf(" highest marks is : %s\n",s1[i].name);
            }
        }
    
    return 0;
}