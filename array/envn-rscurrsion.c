#include<stdio.h>
void even(int n,int i){
   

    if(i%2==0){
        printf("%d ",i);
    }
    if(n==i){
        return;
    }
    even(n,i+1);
}
int main(){
    int n,i=0;
    printf("enter the limit");
    scanf("%d",&n);
    even(n,i);
    return 0;
}