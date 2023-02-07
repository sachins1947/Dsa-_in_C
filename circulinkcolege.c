#include<stdio.h>
#include<stdlib.h>
 struct Node {
      int data;
    struct Node * next;
 };
 void dislpaycircularlink(struct Node * last){
      struct Node *cur = last->next;
       while(cur!=last){
          printf(" %d\n",cur->data);
          cur = cur->next;
       }
       printf("%d",cur->data);
 }
 struct Node *insertatfront(struct Node *last,int item){
     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = item;
    ptr->next = NULL;
      ptr->next = last->next;
      last->next = ptr;
      
      return last;
 }
 struct Node *insertatend(struct Node *last,int item){
      struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = item;
    ptr->next = NULL;
      ptr->next = last->next;
    last->next = ptr;
         return ptr;
 }
 struct Node *deleteatfirst(struct Node *last){
  if(last->next==last){// only one node
    free(last);
    return NULL;
  }
   struct Node  *cur = last->next;
    last->next = cur->next;
        free(cur);
    return last;

 }
 struct Node *deleteatlast(struct Node *last){
     struct Node *cur = last->next;
     while(cur->next!=last){
       cur= cur->next;
     }
    cur->next = last->next;
    free(last);
    return cur;
 }
 void length(struct Node *last){
          int count = 1;
          struct Node *p = last->next;
          while(p!=last){
            p =p->next;
          count++;}
          printf("%d",count);
 }

void main(){
      struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *last;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    last = (struct Node *)malloc(sizeof(struct Node));
    head->data = 4;
    head->next = second;
    second->data = 5;
    second->next = third;
    third->data = 6;
    third->next = last;
    last->data = 23;
    last->next = head;
  
   dislpaycircularlink(last);
  
   // last = deleteatlast(last);
    printf("\n");
     length(last);
   //  dislpaycircularlink(last);

  
}