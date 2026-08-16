#include<stdio.h>
#include<string.h>
int main(){
    char str[200],str1[200];
    int i=0,f=0;
    printf("enter the string: ");
    scanf("%s",str);
    printf("enter the string: ");
    scanf("%s",str1);
    // printf("the string comparison result is: %d\n",strcmp(str,str1));
    // if(strcmp(str,str1)==0){
    //     printf("the strings are equal\n");
    // }else{
    //     printf("the strings are not equal\n");
    // }
    if(strlen(str)==strlen(str1)){
        for(i=0;i<strlen(str)-1;i++){
            if(str[i]!=str1[i]){
                f=1;
            }
        }
        if(f==0){
            printf("the strings are equal\n");
        }else{
            printf("the strings are not equal\n");
        }
    }else{
        printf("the strings are not equal\n");
    }
    
    return 0;
}