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
       ptr =  ptr->next; }
  }
  struct Node *insertatfirst(struct node *head,int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next  = head;
    return ptr;
  }
  struct Node *insertatfirstindex(struct Node *head,int data,int index){
     struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
     struct Node *p = head;
     int i=0;
     while(i!=index-1){
      p= p->next;
      i++;}
     ptr->data = data;
    ptr->next = p->next;
     p ->next = ptr;
     return head;         
  }
  struct Node *insertatend(struct Node *head,int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
     struct Node *p = head;
       while(p->next!=NULL){
        p= p->next;
       }
     ptr->data = data;
       p->next = ptr;
       ptr->next = NULL;
  return head;
  }
  
  struct Node *insertafterNode(struct Node *head,int data,struct Node *periousnode){
       struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
           ptr->data = data;
         ptr->next=  periousnode->next;
       periousnode->next = ptr;
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
Linklist_traversa(head);
  printf("Before Insertion]n");
  head =insertafterNode(head,45,four);
  
  printf("After Insertion");
Linklist_traversa(head);
}