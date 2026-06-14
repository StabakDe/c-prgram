#include<stdio.h>
void main(){
    int i,n;
    char a='A';
    for(i=1;i<=4;i++){
        for(n=1;n<=i;n++){
            printf("%c",a);
        }printf("\n");
        a=a+1;
    }
}