#include<stdio.h>
#include<stdlib.h>
struct Node
{ int data;
struct Node *next;
};
  struct Node *create_node(struct Node *first,int item){
    struct Node *temp = (struct Node*)malloc(sizeof(struct  Node));
    temp->data = item;
    temp->next =NULL;
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
  void display(struct Node *first){
    struct Node *cur = first;
              while(cur!=NULL){
                printf("%d\t",cur->data);
                cur = cur->next;
              }}
  struct Node * deleltewithindex(struct Node *first,int index){
            int i=0;
             struct Node *cur = first;
             struct Node *ptr = NULL;
             if(index==1){
              first= first->next;
              free(cur);
              return first;

             }
            while(i!=index-1){
                ptr = cur;
               cur = cur->next;
                    i++;
            }
          ptr->next = cur->next;
          free(cur);
            return first;
        }
  
void main(){
      struct Node *first=NULL;
    
      int item,n,index;
   printf("ENter the Number of Node to create\n");
    scanf("%d",&n);
    printf("Enter the node value");
     for(int i=0;i<n;i++){
        scanf("%d",&item);
      first =create_node(first,item);

     }
     display(first);
     printf("Enter the index Number");
     scanf("%d",&index);
       first = deleltewithindex(first,index);
       display(first);
}