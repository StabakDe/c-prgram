#include<stdio.h>
void count(int n){
int c=0;
    while(n!=0){
        n=n/10;
        c++;
    }
    printf(" the number of digits are %d",c);
}
int main(){
    int n;
    printf("enter the num");
    scanf("%d",&n);
    count(n);
}