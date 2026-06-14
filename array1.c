#include<stdio.h>
void main(){
    int a[5];
    int b[]={1,2,3,4};
    for(int i=0;i<=9;i++){
        printf("enter a num");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=9;i++){
        printf("a[%d]=%d\n",i,a[i]); 
    }
}