#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *top = NULL; 
int push(int value){
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = value;
    if(top==NULL){
           head->next = NULL;
    }
    else
      head->next =top;
      top = head; 
}
 void pop(){
     if(top==NULL)
     printf("stack underflow");
     struct Node *temp = top;
        top = top->next;
        free(temp);
 }
 void display(){
     if(top==NULL)
        printf("stack is empty");
        struct Node *ptr = top;
        printf("The element in the stack\n");
       do{
         printf("%d\n",ptr->data);
         ptr = ptr->next;
       }while(ptr!=NULL);
 }
void main(){
    int choice, value;
    printf("\nImplementation of Stack using Linked List\n");
    while (1) {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            printf("Popped element is \n");
                pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
}
