#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int cf,pf;
    struct Node *next;
};
  struct Node *insert_rear(int cf,int pf,struct Node *first){
    struct Node *temp = (struct Node*)malloc(sizeof(struct  Node));
    temp->cf = cf;
    temp->pf = pf;
    temp->next = NULL;
    if(first==NULL){
        return temp;
    }
    struct Node *cur = first;
    while(cur->next!=NULL){
        cur = cur->next;
    }
    cur->next = temp;
    return first;
  }
 struct Node *readpoly(struct Node *first){
  int cf,pf,n;
  printf("Enter the number of terms\n");
  scanf("%d",&n);
  for (int  i = 0; i < n; i++)
  {
    printf("Enter the coff and power");
     scanf("%d%d",&cf,&pf);
     first = insert_rear(cf,pf,first);
  }
  return first;
 } 
  void display(struct Node *first){
         if(first==NULL){
            printf("polynomial doesn't exist");
     return;
         }
        
         struct Node *cur = first;
        while(cur!=NULL){
         if(cur->cf>0)
         printf("+");
     printf("%dx^%d",cur->cf,cur->pf);
      cur = cur->next;
  }
  }
void main(){
  struct Node *first =(struct Node*)malloc(sizeof(struct  Node));
   struct Node *second =(struct Node*)malloc(sizeof(struct  Node));
    struct Node *third =(struct Node*)malloc(sizeof(struct  Node));
     struct Node *four =(struct Node*)malloc(sizeof(struct  Node));
     first->cf =9;
     first->pf = 3;
     first->next = second;
     second->cf = 7;
     second->pf = 2;
     second->next = third;
     third->cf = 6;
     third->pf = 1;
     third->next =four;
     four->cf = 9;
     four->pf = 1;
     four->next =NULL;
     display(first); 
   printf("\n");
      first = readpoly(first);
     display(first);
   
}