#include<stdio.h>
#include<stdlib.h>
struct Node{ 
    int data;
    struct Node *prev,*next;
};
void display(struct Node *header){
     struct Node *cur = header->next;
            while(cur!=header){
                printf("%d\n",cur->data);
                cur = cur->next;
            }
}
struct Node *insertatfront(int item,struct Node * header){
  struct Node * temp =(struct Node *)malloc(sizeof(struct Node));
      struct Node *ptr = header;
    struct Node *cur = header->next;
    temp->data = item;
     temp->prev = ptr;
     temp->next = cur;
     cur->prev = temp;
     ptr->next = temp;
     return header;
}
struct Node *insertatend(int item,struct Node * header){
   struct Node * temp =(struct Node *)malloc(sizeof(struct Node));
      temp->data  =item;
      struct Node *ptr = header;
      struct Node *cur = header->next;
       while(cur->next!=header){
        cur = cur->next;
       }
        temp->prev = cur->next;
        cur->next  = temp;
        temp->next = ptr;
        ptr->prev = temp;
        return header;
}
struct Node *delete(int item,struct Node *header){
      struct Node * temp =(struct Node *)malloc(sizeof(struct Node));
      temp->data  =item;
      struct Node *cur = header->prev;
      cur->next = temp;
      temp->prev = cur;
      temp->next = header;
      header->prev = temp;
      return header;
}
struct Node *deleteatfront(struct Node *header){
    struct Node *cur = header->next;
    struct Node *temp = cur->next;
     temp->prev = cur->prev;
     header->next = temp;
     free(cur);
     return header;
}
struct Node *deleteatlast(struct Node *header){
    struct Node *cur = header->next;
    struct Node *ptr = header;
    while(cur->next!=header){
        cur = cur->next;
        ptr = ptr->next;
    }
    struct Node *c = cur->next;
    ptr->next = header;
    header->prev = ptr;
     free(c);
     return  header;
}
struct Node *deleteatlas(struct Node *header){// easy method to delete at last 
     struct Node * cur = header->prev;
     struct Node *temp = cur->prev;
     temp->next = header;
     header->prev = temp;
     free(cur);
     return header;
}
 
 
void main(){
      struct Node *first =( struct Node* )malloc(sizeof(struct Node));
  struct Node *second =( struct Node *)malloc(sizeof(struct Node));
   struct Node *third =( struct Node *)malloc(sizeof(struct Node));
   struct Node *four =(struct Node *)malloc(sizeof(struct Node));
   struct Node *header =(struct Node *)malloc(sizeof(struct Node));
   header->data =4;
   header->next = first;
   header->prev = four;
   first->data = 10;
   first->prev = header;
   first->next = second;
   second->data = 20;
   second->prev = first;
   second->next = third;
   third->data =30;
   third->prev = second;
   third->next = four;
   four->data = 40;
   four->prev = third;
   four->next = header;
   display(header);
   header = delete(70, header);
    printf("\n");
   display(header);
   
}