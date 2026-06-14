#include<stdio.h>
void main(){
    int i,n,x;
    for(i=5;i>=1;i--){
        for(n=5;n>=1;n--){
            if(n>i){
                printf("%d",n);
            }else{
                printf("%d",i);
            }     
        }printf(" \n");
    }

}