#include<stdio.h>
int z=6;//global veriable
void f(){
    int y;
    printf("%d",z);
}

int main()
{
    int x=5;
    printf("%d",z);
    return 0;
    
}
