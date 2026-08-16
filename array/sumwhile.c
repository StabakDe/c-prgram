#include<stdio.h>
int main(){
    int i=1,sum=0;
    while(i<=10){
        sum=sum+i;
        i++;
    }
    printf("sum of first 10 natural numbers is %d",sum);
    return 0;
}