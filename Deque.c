#include <stdio.h>
#include <stdlib.h>
#define n 5
int q[n], f = 0, r = -1, item, s,g,count =0;
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
    printf("Enter the no of element to delete\n");
    scanf("%d",&s);
    for (int i = 1; i <= s; i++)
    {
        item = q[f];
        printf("the deleted item is %d", item);
        f = (f + 1)%n;
    }
        count = count - 1;
}
void insert_front()
{
    if (f == 0 && r != -1)
    {
        printf("the front insertion not possible");
        return;
    }
    if (f == 0 && r==-1)
    {
        r = r + 1;
        q[r] = item;
        return;
    }
    if(f!=0){
    f = f - 1;
    q[f] = item;
    return;}
}
void delete_real()
{
    if (f > r)
    {
        printf("the queue is empty");

        return;
    }
    printf("Enter the element");
    scanf("%d", &g);
    for (int i = 0; i < g; i++)
    {
        item = q[r];
        printf("the delete item %d", item);
        r = r - 1;
    }
    if (f > r)
    {
        f = 0;
        r = -1;
    }
}
void display()
{
    if (f > r)
    {
        printf("emoty");
    }
    for (int i = f; i <=r; i++)
    {
        printf("%d", q[i]);
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
            case 1 :  printf("Enter the element\n");
                      scanf("%d", &item);
                      insert();
                      break;
                      case 2: printf("Delete");
                      delete();
                      break;
        case 3:
            printf("Enter the element\n");
            scanf("%d", &item);
            insert_front();
            break;
        case 4:
            printf("delete the element\n");
            delete_real();
            break;
        case 5:
            printf("display\n");
            display();
            break;
        case 6:
            exit(0);
            break;
        }
    }
}