#include<stdio.h>
void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
void arryPrint(int *a,int size){
    int i;
    printf("a==%d\n",a);
    for(i=0;i<size;i++){
        printf("%d,",a[i]);
    }
}
int main(){
    int x=10,y=20;
    int *p;//pointer veriable
    int **q;
    int ***r;
    int arr[]={1,2,3,4,5};
    // p=&x;
    // printf("p=%d\n",p);
    // printf("address of x=%d\n",&x);
    // printf("value of x=%d\n",*p);
    // *p=20;
    // printf("value of x=%d\n",x);
    // printf("%d\n",*&x);
    // q=&p;
    // printf("addres of p %d\n",&p);
    // printf("addres of p %d\n",q);
    // printf("%d\n",***&*&*&q);
    // r=&q;
    // printf("===>>%d",***r);
    // printf("before swap of x=%d,y=%d\n",x,y);//x=10,y=20
    // swap(&x,&y);
    // printf("before swap of x=%d,y=%d\n",x,y);//20,10
    arryPrint(arr,5);
    printf("===>>%d",&arr[0]);

}
