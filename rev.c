#include<stdio.h>
void rev(int n){
    int r;
    while(n!=0){
        r=n%10;
        printf("  %d ",r);
        n=n/10;
}
}
int main(){
    int n;
    printf("enter the num");
    scanf("%d",&n);
rev(n);
}