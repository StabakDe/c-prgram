#include<stdio.h>
#include<string.h>
int main(){
    int i,j,f=0;
    char str[200],str1[200];
    printf("enter the string: ");
scanf("%s",str);
    for(i=0;i<strlen(str);i++){
          //for(j=strlen(str)-1;j>=0;j--){
             str1[i]=str[strlen(str)-1-i];
         // }
    }
     for(i=0;i<strlen(str);i++){
        if(str[i]!=str1[i]){
            f=1;
            break;
        }
     }
     if(f!=1){
        printf("the string is palindrome\n");
        }else{
        printf("the string is not palindrome\n");
     }
    
 return 0;
}