#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int b[][]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int i,j;
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }       
    }
}