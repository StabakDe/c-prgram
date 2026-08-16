#include<stdio.h>
#include<stdlib.h>
int main(){
    int *x;
    x=(int*)malloc(sizeof(int));// address of memory allocated to x
    *x=10;
    printf("address in x is %u\n",x);
    printf("value in x is %d\n",*x);
    return 0;
}