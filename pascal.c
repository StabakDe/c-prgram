//         1
//        1  1
//      1  2  1
//     1  3  3  1
//    1  4  6  4  1 
#include <stdio.h>
void pascal(int n){
    int c, i, j,k;
    for(i=0; i<n; i++){
        for(k=0; k<n-i; k++){
            printf(" ");
        }
        for(j=0; j<=i; j++){
            if(j==0 || j==i){
                c=1;
            }
            else{
                c=c*(i-j+1)/j;
            }
            printf("%d ", c);
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    pascal(n);
    return 0;
}