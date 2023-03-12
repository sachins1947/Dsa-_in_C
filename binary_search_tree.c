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
    struct Node * searching(struct Node *root,int item){
           if(root==NULL)
           return NULL;
           if(item == root->data)
           return root;
           else if(item< root->data)
             searching(root->left,item);
             else
             searching(root->right,item);
       }
       struct Node *searinter(struct Node *root,int item){
           while (root!=NULL)
           {
           if(root->data == item)
           return root;
           else if(item<root->data)
                       root = root->left;
                       else 
                       root = root->right;
           
       }
       return NULL;
       }

void main(){
    struct Node * p = createnode(5);
   struct Node*  p1= createnode(3);
    struct Node*  p2 = createnode(6);
    struct Node*  p4 =createnode(1);
     struct Node* p5 = createnode(4);
     p->left  =p1;
     p->right = p2;
     p1->right = p5;
     p1->left = p4;
      struct Node * n = searinter(p,56);
      if(n!=0)
    printf("the search element %d\n",n->data);
    else
      printf("element not in BST");
}