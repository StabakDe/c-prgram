#include<stdio.h>
int main(){
    int a[100],n,i,j,temp,k=0;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the number: ");
        scanf("%d",&a[i]);
    }
    printf("enter the value of k: ");
    scanf("%d",&k);
    for(i=0;i<n;i=i+k){
        int x;
        if(i+k-1<n-1){
            x=i+k-1;
        }else{
            x=n-1;
        }
        for(j=x;j>=i;j--){
            printf("%d ",a[j]);
        }
    }
    return 0;
}