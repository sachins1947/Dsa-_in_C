#include <stdio.h>
#include <stdlib.h>
#define n 5
int q[n];
int f = 0, r = -1, count = 0, item, s;
void insert()
{
    if (count == n)
    {
        printf("queue Overflow\n");
        return;
    }
    r = (r + 1)%n;
    q[r] = item;
    count = count + 1;
}
void delete()
{
    if (count == 0)
    {
        printf("Empty");
        return;
    }
        item = q[f];
    
        f = (f + 1)%n;
        count = count - 1;
}
void display()
{
    if (count == 0)
    {
        printf("Empty\n");
        return;
    }
    for (int i = 1; i <= count; i++)
    {
        printf("%d", q[f]);
        f = (f + 1) % n;
    }
}
void main()
{
    printf("Insert rear:\ndelte front:\nDisplay:\n");
    int choice;
    while (1)
    {
        printf("Enter the choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element\n");
            scanf("%d", &item);
            insert();
        break;
        case 2:
            printf("delete the element\n");
            delete ();
         break;
        case 3:
            printf("display\n");
            display();
        break;
        case 4:
            exit(0);
            break;
        }
    }
}