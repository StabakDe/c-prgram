// 0,1,1,2,3,5,8,13,21
#include<stdio.h>
int main(){
    int i,n,a=0,b=1,c,arr[100];
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        // printf("%d,",a);
        arr[i]=a;
        c=a+b;
        a=b;
        b=c;

    }
    for(i=0;i<n;i++){
          printf("%d,",arr[i]);
    }
}
