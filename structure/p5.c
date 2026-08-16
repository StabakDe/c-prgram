#include<stdio.h>
int main(){
    void *x;
    int y=5;
    float z=y;
    x=&y;
    // printf("%d",*(int*)x);
    // printf("%d",(int)z);
    printf("%d",sizeof(z));
}