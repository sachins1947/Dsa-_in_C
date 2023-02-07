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
}