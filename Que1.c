#include <stdio.h>
#include<stdlib.h>
#define queuesize 5
int q[queuesize];
int f = -1;
int r = -1;
    int x, n;
    int s;
void insert()
{
    if (r == queuesize - 1)
        printf("Overflow");

    else if (f == -1 && r == -1)
    {
        f = r = 0;
        printf("Enter the number of element");
        scanf("%d", &n);
        printf("Enter the element to inserted");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            q[r] = x;
            r = r + 1;
        }
    }
}
void delete()
{
    if (f == -1 && r == -1)
        printf("underflow");
    else if (f == r)
        f = r = -1;
    else
    {
        printf("Enter  number of element to delete");
        scanf("%d", &s);
        for (int j = 0; j < s; j++)
        {
             q[f] = x;
            printf("%d", q[f]);
            f = f+1;
        }
    }
}
void display()
{
    if (f == -1 && r == -1)
        printf("underflow");
    for (int i = f; i <= r; i++)
    {
        printf("%d", q[i]);
    }
}

void main()
{
    int choice;
    printf("Enter the Choice\n");
    scanf("%d",&choice);
    for(;;){
    switch (choice)
    {
    case 1 : insert();
        break; 
        case 2 : delete();
        break;
        case 3 : display();
        break;
        case 4 : exit(0);
        break;
       default:
        break;
    }
    }
}