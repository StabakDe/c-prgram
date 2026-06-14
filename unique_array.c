#include<stdio.h>
void main(){
    int a[6],n,count=0,s,i,j;
    
    for(i=0;i<=5;i++){
        printf("enter a num");
        scanf("%d",&a[i]);
    }
    printf("unique elements are:");
    for(i=0;i<=5;i++){
        for(j=0;j<=5;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count==1){
            printf("%d,",a[i]);
        }
        count=0;
       
    }

}