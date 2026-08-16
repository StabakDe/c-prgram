#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    int i=0;
    printf("enter the string: ");
    fgets(str, sizeof(str), stdin);
    // printf("the string is: %d\n",strlen(str));
    while(str[i]!='\0'){
        i++;
    }
    printf("the string length is: %d\n",i);
    return 0;
}