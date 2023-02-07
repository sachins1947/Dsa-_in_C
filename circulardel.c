#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void Linklist_traversa(struct Node * head){
    struct Node *p = head;
    do{
       printf("%d\n",p->data);
       p =p->next;
    }while(p!=head);
}
struct Node *deletionfirstnode(struct Node *head){
      struct Node *p =head;

       while(p->next!=head)
      p= p->next;
      printf("value: %d",p->data);
    p->next = head->next;
    free(head);
    head = p->next;
    return head;
}
struct Node *deletionlastnode(struct Node *head){
      struct Node *p =head;
     struct Node *q = head->next;
      while(q->next!=head){
        q = q->next;
       p = p->next;}
        printf("q =%d\n",q->data);
         printf("p =%d\n",p->data);
        p->next = head;
          free(q);
          return head;
}
struct Node *deletiobninbetnode(struct Node *head,int index){
      struct Node *p =head;
      struct Node *q = head->next;
      int i=0;
     while(i!=index-1){
        p = p->next;
        q =q->next;
        i++;
     }
        p->next = q->next;
         printf("q =%d\n",q->data);
         printf("p =%d\n",p->data);
        free(q);
          return head;
}
void main(){
       struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *four;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    four = (struct Node *)malloc(sizeof(struct Node));
    head->data = 4;
    head->next = second;
    second->data = 5;
    second->next = third;
    third->data = 6;
    third->next = four;
    four->data = 23;
    four->next = head;
    printf("before insertion\n");
    Linklist_traversa(head);
   head = deletiobninbetnode(head,2);
    printf("After Insertion\n");
    Linklist_traversa(head);
}
