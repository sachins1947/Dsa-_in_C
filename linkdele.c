#include<stdio.h>
#include<stdlib.h>
 struct Node
 {
     int data;
     struct Node *next;
 };
  void Linklist_traversa(struct Node *ptr){
    while(ptr!=NULL){
        printf("the element = %d\n",ptr->data);
       ptr =  ptr->next;    }
  }
  struct Node *deletefront(struct Node *head){ 
        struct Node *ptr = head;
        head = head->next;
        free(ptr);
        return head;
  }
  struct Node *deletenodeinbtw(struct Node *head,int index){
      struct Node *p = head;
      struct Node *q = head->next;
      int i=0;
    while(i!=index-1){
          p = p->next;
          q = q->next;
          i++;
     }
      
        p->next = q->next;
        free(q);
        return head;
  }
  struct Node *deletelastnode(struct Node *head){
    struct Node *p = head;
  struct Node *q = head->next;
     while(q->next!=NULL){
       p = p->next;
       q = q->next;
     }
  p->next = NULL;
    free(q);
    return head;}
struct Node *deletewithvalue(struct Node *head,int value){
    struct Node *p = head;
  struct Node *q = head->next;
     while(q->data!=value && q->next!=NULL){
      p = p->next;
      q =q->next;
     }
     if(q->data==value){
        p->next = q->next;
        free(q);
     }
     return head;
  }

void main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *four;
head = (struct Node*)malloc(sizeof(struct  Node));
second=(struct Node*)malloc(sizeof(struct  Node));
third =(struct Node*)malloc(sizeof(struct  Node));
four = (struct Node*)malloc(sizeof(struct  Node));
 head->data = 4;
 head->next =second;
  second->data = 5;
  second->next = third;
  third->data = 6;
  third->next = four;
  four->data =23;
  four->next = NULL;
  printf("linklist before deletion");
Linklist_traversa(head);
 head =deletewithvalue(head,6);
 printf("linklist after deletion ");
Linklist_traversa(head);
}