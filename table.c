#include<stdio.h>
void table(int n){
    int i,m;
    for(i=1;i<=10;i++){
        m=n*i;
        printf("%d * %d = %d \n",n,i,m);
    }
}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    table(n);
}
