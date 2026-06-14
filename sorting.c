#include<stdio.h>
int main(){
    int arr[5]={20,10,30,50,40},c,i,j;
    for( i=0;i<5;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
    for( i=0;i<5;i++){
       for( j=i+1;j<5;j++){
        if(arr[i]>arr[j]){
            c=arr[i];
            arr[i]=arr[j];
            arr[j]=c;

        }
       }
    }
  
    for( i=0;i<5;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}