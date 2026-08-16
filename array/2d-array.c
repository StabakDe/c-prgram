#include <stdio.h>
int main(){
    int a[4][4],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("enter the array element [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i==j){
                printf("%d ",a[i][j]);
            }
            if(i+j==3){
                printf("%d ",a[i][j]);
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}