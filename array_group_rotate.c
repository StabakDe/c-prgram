// arr=1,2,3,4,5,6,7,8,9
// k=3
// 3,2,1,6,5,4,9,8,7
#include<stdio.h>
void main(){
    int a[10],s,i,j,b[10],k=0,m=0;
    
    for(i=0;i<10;i++){
        printf("enter a num");
        scanf("%d",&a[i]);
    }
    printf("enter the frequency");
    scanf("%d",&s);
    for(i=0;i<10;i=i+s){
        for(j=i+s-1;j>=i;j--){
            b[k]=a[j];
            k++;
            m++;
            printf("m=%d,%d\n",m,k);
        }
        
    }
 
    for(i=m;i<10;i++){
        b[k]=a[i];
        k++;
    }
   
    for(i=0;i<10;i++){
         printf("%d,",b[i]);
    }
}