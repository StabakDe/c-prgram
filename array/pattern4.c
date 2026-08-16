#include<stdio.h>
int main(){
    int i,j,k=1,l;;
    for(i=0;i<5;i++){
        for(l=5;l>i;l--){
            printf("  ");
        }
        for(j=0;j<=i;j++){
            printf(" %d ",k);
            k++;
        }
        printf("\n");   
    }
}