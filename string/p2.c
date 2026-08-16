#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    int i=0;
    printf("enter the string: ");
    scanf("%s",str);
    // printf("the string is: %d\n",strlen(str));
    while(str[i]!='\0'){
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%c",str[j]);
    }
    printf("\n");
    return 0;
}