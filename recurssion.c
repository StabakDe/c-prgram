#include<stdio.h>
int fun(int n){
 if(n==1){// base case
    return 1;
 }
 
 return n*fun(n-1);//recurrsive call
}
int main(){
int n,s=0 ;
printf("enter the number");
scanf("%d",&n);
 printf("%d,",fun(n));
}