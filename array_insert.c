#include<stdio.h>
void main(){
    int a[10],n,count=0,s,i;
    
    for(i=0;i<5;i++){
        printf("enter a num");
        scanf("%d",&a[i]);
        count++;
    }
    while(1){
        printf("enter a position ");
            scanf("%d",&n);
        printf("enter a number ");
            scanf("%d",&s);
        if(n>=10){
            printf("cant inset");
            break;
        }
        if(count==10){
            printf("cant inset,array full");
            break;
        }
        for(i=9;i>=n;i--){
            a[i]=a[i-1];
        }
        a[n]=s;
        count++;
        printf("count=>%d",count);

        for(int i=0;i<=9;i++){
            printf("a[%d]=%d\n",i,a[i]); 
        }
    }
}