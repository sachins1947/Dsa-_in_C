#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void Linklist_traversa(struct Node *head)
{
    struct Node *p = head;
    do
    {
        printf("%d\n", p->data);
        p = p->next;

    } while (p != head);
}
struct Node *insertaTFIRST(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = ptr;
     if(head==NULL)
     return  ptr;
    struct Node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    struct Node *cur = p->next;
    p->next = ptr;
    ptr->next = cur;
    head = ptr;
    return head;
}
struct Node *insertatlast(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return head;
}
struct Node *insertinbetween(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct Node *insertafternode(struct Node *head, int data, struct Node *str)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
     struct Node *p = head;
     ptr->next = str->next;
      str->next = ptr;
      return head;
}
void main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *four;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    four = (struct Node *)malloc(sizeof(struct Node));
    head->data = 4;
    head->next = second;
    second->data = 5;
    second->next = third;
    third->data = 6;
    third->next = four;
    four->data = 23;
    four->next = head;
    printf("before insertion\n");
    Linklist_traversa(head);
    head = insertaTFIRST(head,1);

    // head = insertinbetween(head,65,3);
    printf("After Insertion\n");
    Linklist_traversa(head);
}