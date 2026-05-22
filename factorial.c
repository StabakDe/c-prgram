#include<stdio.h>
void fac(int n){
    int i,s=0,m=1;
for(i=1;i<=n;i++){
m=m*i;
}
printf("the factorial is%d",m);
}
int main(){
    int n;
     printf("enter the number ");
     scanf("%d",&n);
     fac(n);
}