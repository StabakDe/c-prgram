#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    // printf("size of node is %d\n",sizeof(struct node));
    int n;
    printf("enter the number of nodes\n");
    scanf("%d",&n);
    struct node *head=NULL,*p=NULL;
    
    for(int i=0;i<n;i++){
        if(head==NULL){
            head=(struct node*)malloc(sizeof(struct node));
            p=head;
        }else{
            p->next=(struct node*)malloc(sizeof(struct node));//2000
            p=p->next;
        }
        printf("enter a value\n");
        scanf("%d",&p->data);//10
        p->next=NULL;
        
    }
    p=head;
    printf("the values in the linked list are\n");
    while(p!=NULL){
            printf("%d\n",p->data);
            p=p->next;
    }
    return 0;
}