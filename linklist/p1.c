#include<stdio.h>
struct node{
    int data;
    struct node *next; //self referential structure
};
int main(){
     struct node n1,n2,n3;
     n1.data=10;
     n2.data=20;
     n3.data=30;
     n1.next=&n2;
     n2.next=&n3;
     n3.next=NULL;
     struct node *ptr=&n1;
        while(ptr!=NULL){
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
}