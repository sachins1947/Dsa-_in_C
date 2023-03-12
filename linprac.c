#include<stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};
void Linklist_traversa(struct Node *head)
{
    struct Node *p = head->next;
    do
    {
        printf("%d\n", p->data);
        p = p->next;

    } while (p != head);
}
 struct Node *cocca(struct Node *first,struct Node *second){
   // struct Node *c = first;
     struct Node * cur = first;
     struct Node *pur = second;
      while(cur->next!=first){
         cur = cur->next;
      }
      while(pur->next!=second){
        pur = pur->next;
      }
      //struct Node *ptr = second;
        cur->next = second->next;
        pur->next = first;      
      return first;
 }
void main(){
    struct Node *header = (struct Node *)malloc(sizeof(struct Node));
     struct Node *first =( struct Node* )malloc(sizeof(struct Node));
  struct Node *second =( struct Node *)malloc(sizeof(struct Node));
   struct Node *third =( struct Node *)malloc(sizeof(struct Node));
   struct Node *four =(struct Node *)malloc(sizeof(struct Node));
 header->data = 4;
 header->next = first;
   first->data = 10;  
   first->next = second;
   second->data = 20;  
   second->next = third;
   third->data =30; 
   third->next = four;
   four->data = 40; 
   four->next = header;
   struct Node *header1 = (struct Node *)malloc(sizeof(struct Node));
   struct Node *five =(struct Node *)malloc(sizeof(struct Node));
   struct Node *six =(struct Node *)malloc(sizeof(struct Node));
   header1->data= 2;
   header1->next = five;
    five->data = 50;
    five->next =six;
    six->data = 60;
    six->next = header1;
    printf("list 1\n");
    Linklist_traversa(header);
      printf("\n");
      printf("list 2\n");
   Linklist_traversa(header1);
   printf("\n");
   header = cocca(header,header1);
   Linklist_traversa(header);
}