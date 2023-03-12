#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};
void Linklist_traversa(struct Node *ptr)
{
  while (ptr != NULL)
  {
    printf("the element = %d\n", ptr->data);
    ptr = ptr->next;
  }
}
void countnode(struct Node *head)
{
  int count = 0;
  while (head != NULL)
  {
    count++;
    head = head->next;
  }
  printf("the no of nodes %d : ", count);
}
struct Node *conca(struct Node *firstlist, struct Node *secondlist)
{
  struct Node *p = firstlist;
  struct Node *q = secondlist;
    if(p==NULL)
    return secondlist;
    if(q==NULL)
    return firstlist;
  while (p->next != NULL)
  {
    p = p->next;
  }
  p->next = q;
  return firstlist;
}
struct Node *reverselink(struct Node *head)
{
  struct Node *p = head;
  struct Node *temp = NULL, *cur;
  while (p != NULL)
  {
    cur = p;
    p = p->next;
    cur->next = temp;
    temp = cur;
  }
  return temp;
}
struct Node *deletewithfilledvalue(struct Node *head, int item)
{
  struct Node *temp, *cur;
  if (head == NULL)
  {
    printf("link list is empty");
    return head;
  }
  if (item == head->data)
  {
    cur = head;
    head = head->next;
    printf("the deleted irem is %d", cur->data);
    free(cur);
    return head;
  }
  cur = head;
  temp = NULL;
  while (cur != NULL && item != cur->data)
  {
    temp = cur;
    cur = cur->next;
  }
  if (cur == NULL)
  {
    printf("item not found");
    return head;
  }
  temp->next = cur->next;
  printf("the deleted item is %d :", cur->data);
  free(cur);
  return head;
}
struct Node *insertatspecificpos(struct Node *head, int index, int item)
{
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = item;
  temp->next = NULL;
  struct Node *cur = head;
  if (head == NULL && index == 1)
  {
    return temp;
  }
  if (index == 1)
  {
    temp->next = head;
    return temp;
  }

  struct Node *prev = NULL;
  int i = 1;
  while (cur != NULL && i != index)
  {
    prev = cur;
    cur = cur->next;
    i++;
  }
  if (i != index)
  {
    printf("index not found");
    free(temp);
    return head;
  }
  prev->next = temp;
  temp->next = cur;
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
  struct Node *five = (struct Node *)malloc(sizeof(struct Node));
 struct Node * six = (struct Node *)malloc(sizeof(struct Node));
  head->data = 4;
  head->next = second;
  second->data = 5;
  second->next = third;
  third->data = 6;
  third->next = four;
  four->data = 23;
  four->next = NULL;
  five->data = 3;
  five->next = six;
  six->data = 9;
  six->next =NULL;


  Linklist_traversa(head);
  head = conca(NULL,five);
  printf("\n");
  Linklist_traversa(head);
}