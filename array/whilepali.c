#include<stdio.h>
int main(){
    int n,num=0,temp,rem;
    printf("enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        rem=temp%10;
        num=num*10+rem;
        temp=temp/10;
    }
    if(num==n){
        printf("the number is palindrome");
    }else{
        printf("the number is not palindrome");
    }
    return 0;
}