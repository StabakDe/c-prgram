#include<stdio.h>
int main(){
    int i,arr[10],x,f=0;
    for(i=0;i<10;i++){
        printf("enter a number");
        scanf("%d",&arr[i]);
    }

    printf("enter a number you want to search");
    scanf("%d",&x);

    for(i=0;i<10;i++){
        if(arr[i]==x){
            f=1;
            break;
        }
    }
    if(f!=0){
        printf("element found");
    }else{
        printf("element not found");

    }

    return 0;
}