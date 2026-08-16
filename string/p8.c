#include<stdio.h>
#include<string.h>
int main(){
    int i,j=0,k=0,f=0;
    char str[200],a[10][100],x[100],y[100];
    printf("enter the string");
    fgets(str, sizeof(str), stdin);
     printf("enter the word you want to replace");
     scanf("%s",x);
     printf("enter the replacement word");
     scanf(" %s",y);
    for(i=0;i<=strlen(str);i++){
        if(str[i]!=' ' && str[i]!='\0'){
            a[j][k]=str[i];
            k++;

        }else{
            a[j][k]='\0';
            j++;
            k=0;
        }
      
    }
    for(i=0;i<j;i++){
        if(strlen(a[i])==strlen(x)){
            for(k=0;k<strlen(a[i]);k++){
                if(a[i][k]!=x[k]){
                    f=1;
                }
            }
            if(f!=1){
                printf("%s ",y);
            }else{
                printf("%s ",a[i]);
            }
            f=0;
        }else{
            printf("%s ",a[i]);
        }
    }
}