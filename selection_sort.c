#include<stdio.h>
int main(){
    int arr[5]={50,40,30,20,10},pos=0,i,j,c;
    for( i=0;i<5;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
    for(i=0;i<5;i++){
        pos=i;
        for(j=i+1;j<5;j++){
            if(arr[pos]>arr[j]){
                pos=j;
            } 
        }
        c=arr[i];
        arr[i]=arr[pos];
        arr[pos]=c;
    }
    for( i=0;i<5;i++){
        printf("%d,",arr[i]);
    }
}