#include <stdio.h>
#include <stdlib.h>

#define queuesize 5

int q[queuesize], f = 0, r = -1, item, n,s;

void insert_rear()
{
    if (r == queuesize - 1)
    {
        printf("Queue is Overflow\n");
        return;
    }
    else
    {

        printf("Enter elements:\n");
            scanf("%d", &item);
            r = r + 1;
            q[r] = item;
        
    }
}
void delete_front()
{
    if (f > r)
    {
        printf("Queue is empty\n");
        return;
    }
   
    item = q[f];
    printf("Popped Item : %d\n", item);
    f = f + 1;
      
    
    if (f > r)
    {
        f = 0;
        r = -1;
    }}


void display()
{
    if (f > r)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Elements of Queue are:\n");
    for (int i = f; i <= r; i++)
    {
        printf("%d ", q[i]);
    }
    printf("\n");
}
void main()
{
    int choice;
    for(;;)
    {
        printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");
        printf("Enter the choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert_rear();
            break;
        case 2:
            delete_front();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
}