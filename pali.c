#include<stdio.h>
void rev(int n){
    int r,ori,rev=0;
    ori=n;
    while(n!=0){
        r=n%10;
       rev=rev * 10+r;
        n=n/10;
        
}
if(rev==ori){
    printf("palindrome");
}
else{
    printf("not palindrome");
}

}
int main(){
    int n;
    printf("enter the num");
    scanf("%d",&n);
rev(n);
}
