#include<stdio.h>
#include<math.h>
void main(){
    int b,n,r,s=0,c=0;
    printf("enter a binary number");
    scanf("%d",&b);
    n=b;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s+r*pow(2,c);
        c++;
    }
    printf("ans=%d",s);
}