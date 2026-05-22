#include<stdio.h>
void evenodd(int n){
    if(n%2==0){
        printf("the number is even");
    }
    else{
        printf("the is odd");
    }
}
int main(){
    int n;
    printf("enter the number u want to check");
    scanf("%d",&n);
    evenodd(n);
}