#include<stdio.h>
#include<math.h>
void arm(int n){
    int c=0,r,m,s=0,temp,ori;
    temp=n;
    ori=n;

    while(temp!=0){
        temp=temp/10;
        c++;
    }
    temp=n;
        printf("number of digiits=%d \n",c);
    while(temp!=0){
        r=temp%10;
        printf(" the nums r %d \n",r);
m=pow(r,c);
s=s+m;
        temp=temp/10;
    }
    if(s==ori){
        printf("it is a armstrong number");
    }
    else{
        printf("its not an armstrong number");
    }
}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    arm(n);
    return 0;
}