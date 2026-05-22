#include<stdio.h>
void add(int x, int y){
    int z=x+y;
    printf("sum + %d",z);
}  
void sub(int x , int y){
    int z=x-y;
    printf("sub= %d",z);
}
void mul(int x ,int y){
    int z=x*y; 
    printf("mul= %d",z);
}
void div(int x ,int y){
    int z =x/y;
    printf("div=%d",z);
}
void out(){
    printf("invalid request");
}
int main(){
    int opt,a,b;
    printf(" for add press 1 \n");
    printf(" for sub press 2 \n");
    printf(" for mul press 3 \n");
    printf(" for div press 4 \n");

    printf(" enter the opt");
  scanf("%d",&opt);

    printf("enter the two values");
    scanf("%d %d",&a,&b);
    
    switch(opt){
        case 1:
        add(a,b);
        break;
        case 2:
        sub(a,b);
        break;
        case 3:
        mul(a,b);
        break;
        case 4:
        div(a,b);
        break;
        default:
        out();

    }
    return 0;

}