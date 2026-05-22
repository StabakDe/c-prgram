#include<stdio.h>
void prime(int n){
    int i,s=0;
    for(i=2;i<n/2;i++){
        if(n%i==0){
            s++;
        }
    }
if(s==0){
    printf("%d,",n);
}
}
int main(){
int i,n;
printf("enter a number");
scanf("%d",&n);
for(i=2;i<=n;i++){
    prime(i);
}
return 0;
}