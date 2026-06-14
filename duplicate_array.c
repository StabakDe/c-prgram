#include<stdio.h>
void main(){
    int a[6],count=0,s,i,j,b[6],k=0,m,n;
    
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
        if(count!=1){
            for(m=0;m<k;m++){
                if(a[i]==b[m]){
                    n=1;
                }
            }
            if(n!=1){
                b[k]=a[i];
                k++;
            }
            n=0; 
        }
        count=0;
    }
    for(i=0;i<k;i++){
        printf("%d,",b[i]);
    }

}