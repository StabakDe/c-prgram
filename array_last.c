#include<stdio.h>
void main(){
    int arr[5],n=0,x;
    for(int i=0;i<=5;i++){
        printf("enter a number",n);
        scanf("%d",&x);
        if(n==5){
            printf("out of bound\n");
        }else{
            arr[n]=x;
            n=n+1;
        }
    }
    for(int i=0;i<=4;i++){
         printf("a[%d]=%d\n",i,arr[i]); 
    }

}