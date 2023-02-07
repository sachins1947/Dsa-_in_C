#include<stdio.h>
#include<stdlib.h>
#define  n 5 
int q[n];
int f=0,r=-1,item,j,count=0,s;
  void insert_priority(){
    if(r==n-1){
    printf("the queue is full");
    return;}
    j=r;
    while (j>=0 && item<q[j])
    {
        q[j+1] = q[j];
        j--;
    }
    q[j+1]= item;
    r= r +1;
  }
  void delete()
{
    if (f>r)
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
     //   count = count - 1;
}
void display()
{
    if (f>r)
    {
        printf("Empty\n");
        return;
    }
    for (int i = f; i <= r; i++)
    {
        printf("%d", q[i]);
        f = (f + 1) % n;
    }
}
void main(){
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
            insert_priority();
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