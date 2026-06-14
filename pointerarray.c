#include<stdio.h>
void prime(int *a,int n){
    int i,j,x=0;
    for(i=0;i<n;i++){
        for(j=2;j<a[i]/2;j++){    
            if(a[i]%j==0){
                x=1;
            } 
        }
        if(x==0){
            printf("%d is prime \n",a[i]);
        }else{
            printf(" %d not prime \n",a[i]);
        }
        x=0;
    }
}
        

void main(){
    int i,j,n,a[100];
    printf("enter the size");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the array");
        scanf("%d",&a[i]);
    }
    prime(a,n);
}
