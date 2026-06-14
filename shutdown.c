#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void add(){
  int a,b,c;
  printf("enter 2 numbers");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("ans=%d\n",c);
}
void sub(){
  int a,b,c;
  printf("enter 2 numbers");
  scanf("%d%d",&a,&b);
  c=a-b;
  printf("ans=%d\n",c);
}
void mul(){
  int a,b,c;
  printf("enter 2 numbers");
  scanf("%d%d",&a,&b);
  c=a-b;
  printf("ans=%d\n",c);
}
void divition(){
  int a,b,c;
  printf("enter 2 numbers");
  scanf("%d%d",&a,&b);
  c=a/b;
  printf("ans=%d\n",c);
}
void main(){
int opt;
  while (1)
  {
    printf("1.add\n");
    printf("2.sub\n");
    printf("3.mul\n");
    printf("4.div\n");
    printf("5.exit\n");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
      printf("add\n");
      add();
      break;
    case 2:
      printf("sub\n");
      sub();
      break;
    case 3:
      printf("mul\n");
      mul();
      break;
    case 4:
      printf("div\n");
      divition();
      break;
    case 5:
      printf("exit\n");
      exit(1);
    
    default:
      printf("wrong choice\n");
      break;
    }
  }
}