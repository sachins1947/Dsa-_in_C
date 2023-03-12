#include<stdio.h>
#include<stdlib.h>
struct Node{ 
    int data;
    struct Node *prev,*next;
};
 void travers(struct Node * cur){
        while(cur!=NULL){
          printf("%d\n",cur->data);
            cur = cur->next;
        }
 }
 struct Node *traversback(struct Node *first){
       struct Node *temp = NULL;
         struct Node *cur = first;
        while(cur!=NULL){
            temp = cur->prev;
            cur->prev = cur->next;
            cur->next = temp;
            cur = cur->prev;
        }
        first = temp->prev;
        return first;
 }
   struct Node *insertatfirst(struct Node *first,int data){
    struct Node *ptr =( struct Node* )malloc(sizeof(struct Node));
    ptr->data = data;
        struct Node *cur = first;
        cur->prev =ptr;
        ptr->next = cur;
        ptr->prev =NULL;

     return ptr;
   }
   struct Node *insertatlast(struct Node *first,int data){
    struct Node *ptr =( struct Node* )malloc(sizeof(struct Node));
    ptr->data = data;
          struct Node *cur = first;
          while(cur->next!=NULL){
          cur = cur->next;
          }
         cur->next = ptr;
         ptr->prev = cur;
         ptr->next = NULL;
         return first;
   }
   struct Node *deleteatfirst(struct Node *first){
     if(first->next==NULL){
      printf("The delete element is %d",first->data);
       return NULL;
     }
    struct Node * cur = first;
    printf("the deleted element si %d\n",cur->data);
       free(cur);
       first = first->next;
       first->prev = NULL;
       return first;

   }
    struct Node *deleteatlast(struct Node *first){
       if(first->next==NULL){
      printf("The delete element is %d",first->data);
       return NULL;
     }
      struct Node *tem = first;
      struct Node *cur = first->next;
      while(cur->next!=NULL){
        cur = cur->next;
         tem = tem->next;
      }
      free(cur);
      tem->next = NULL;
      return first;
    
    }
    struct Node *insertatgivenvalue(int item,int key,struct Node * head){
      struct Node *ptr =( struct Node* )malloc(sizeof(struct Node));
      ptr->data = item;
      ptr->prev =NULL;
      ptr->next = NULL;
      if(key==head->data){
         head->prev = ptr;
         ptr->next = head;
         ptr->prev = NULL;
         head = ptr;
         return head;
      }
      struct Node *tem = head;
      struct Node *cur = head->next;
          while(cur!=NULL && key!=cur->data){
            cur =cur->next;
            tem=tem->next;
          }
          if(cur==NULL)
          printf("The node value   is not present in the list");
          tem->next = ptr;
          ptr->prev = tem;
          ptr->next = cur;
          cur->prev = ptr;
          return head;
    }
    struct Node *deleteanodegivenvalue(int key,struct Node *head){
    struct Node *tem = head;
    struct Node *cur = head->next;
      if(key==head->data){
        struct Node *a= head;
         head = head->next;
         free(a);
         return head;
      }
    while(cur!=NULL && key!=cur->data){
         cur = cur->next;
         tem = tem->next;
    }
    struct Node *pr = cur->next;
          free(cur);
          pr->prev = tem;
          tem->next = pr;
          return head;

  
    }


 
  
void main(){
    struct Node *first =( struct Node* )malloc(sizeof(struct Node));
  struct Node *second =( struct Node *)malloc(sizeof(struct Node));
   struct Node *third =( struct Node *)malloc(sizeof(struct Node));
   struct Node *four =(struct Node *)malloc(sizeof(struct Node));
   first->data = 10;
   first->prev = NULL;
   first->next = second;
   second->data = 20;
   second->prev = first;
   second->next = third;
   third->data =30;
   third->prev = second;
   third->next = four;
   four->data = 40;
   four->prev = third;
   four->next = NULL;
      travers(first);
      printf("\n");
   first = insertatfirst(10,first);
       travers(first);
}