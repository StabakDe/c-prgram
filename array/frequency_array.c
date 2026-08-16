#include<stdio.h>
int main(){
    int a[100],b[10],i,j,n;
    for(i=0;i<10;i++){
        b[i]=0;
    }
    printf("enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the number: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b[a[i]]++;
    }
    for(i=0;i<10;i++){
        if(b[i]!=0){
            printf("frequency of %d is %d\n",i,b[i]);
        }
    }
}