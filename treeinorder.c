#include<stdio.h>
#include<stdlib.h>
struct Node
{
     int data;
     struct Node  *left;
     struct Node *right;
};
 struct Node   *createnode(int data){
     struct Node *n = (struct Node*)malloc(sizeof(struct Node));
         n->data = data;
         n->left =NULL;
         n->right = NULL;
return n;
 }
      void printinorder(struct Node * root){
         if(root!=NULL){
            printinorder(root->left);
            printf(" %d ",root->data);
            printinorder(root->right);

         }
      }
void main(){
    struct Node * p = createnode(7);
   struct Node*  p1= createnode(2);
    struct Node*  p2 = createnode(3);
    struct Node*  p4 =createnode(1);
     struct Node* p5 = createnode(4);
     p->left  =p1;
     p->right = p2;
     p2->right = p5;
     p1->left = p4;
     printinorder(p);
}