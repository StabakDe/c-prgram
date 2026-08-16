#include<stdio.h>
#include<string.h>
int main(){
    int i ,c=0,f=0;
    char str[100];
printf("enter the string : ");
fgets(str,sizeof(str),stdin);
for(i=0;i<strlen(str);i++){
    if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U' ){
        c++;
    }
}
    printf("the total vowels is = %d \n",c);
    for(i=0;i<strlen(str);i++){
    if(str[i]==' '){
        f++;
    }
}
int y=f+1;
     printf("the total space is = %d \n",f);
      printf("the total words is = %d \n",y);
return 0;
}
