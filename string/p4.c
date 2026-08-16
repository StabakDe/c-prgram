#include<stdio.h>
#include<string.h>
int main(){
    char str[200],str1[200],c[200];
    int i=0,j=0;
    printf("enter the string: ");
    scanf("%s",str);
    printf("enter the string: ");
    scanf("%s",str1);
    // printf("the string is: %d\n",strlen(str));
    for(i=0;i<strlen(str);i++){
        c[i]=str[i];
    }
    
    c[i]=' ';
    i++;
    while(str1[j]!='\0'){
        c[i]=str1[j];
        i++;
        j++;
    }
    c[i]='\0';

    printf("the string c=: %s\n",c);
    return 0;
}