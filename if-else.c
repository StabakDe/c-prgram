#include<stdio.h>
void main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%2==0){
        printf("even");
    }else{
        printf("odd");
    }
}