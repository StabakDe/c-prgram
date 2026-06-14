#include<stdio.h>
void main(){
    int i,n,y,z;
    for(i=1;i<=5;i++){
         for(z=4;z>=i;z--){
            printf(" ");
        }
        for(n=1;n<=i;n++){
           printf(" *");
        }
        printf("\n");
    }
     for(i=1;i<=4;i++){
         for(z=1;z<=i;z++){
            printf(" ");
        }
        for(n=4;n>=i;n--){
           printf(" *");
        }
        printf("\n");
    }
}