#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define stacksize 5
int stack[stacksize];
int top = -1;
void push()
{
	int item, n;
	if (top == stacksize - 1)
	{
		printf("stack overflow");
		return;

	}
    printf("Enter the element");
			scanf("%d", &item);
			stack[++top] = item;
	
	
}

void pop()
{
	int item, a;
	if (top == -1)
	{
		printf("stack underflow");
		return;
	}
	else
	{
		
			printf("the deleted element %d\n", stack[top--]);
		
	}
}
 void pali(){
    int digit,j,k,len = top+1,length=0,ind=0;
     int num[len] ,rev[len],i=0;
     while(top!=-1){
        digit = stack[top];
        num[i++] = digit;
          top--;
     }
     for( j=0;j<len;j++)
     printf("Number : %d\n",num[j]);
     printf("reverse operation\n");
     for(k=len-1;k>=0;k--){
         rev[k] =num[ind];
          ind++;
     }
     printf("the reverse string :");
     for(k=0;k<len;k++)
      printf("%d\n",rev[k]);
      printf("check for palidrome\n");
      for(i=0;i<len;i++){
        if(num[i]==rev[i]){
            length = length +1;
        }
      }
      if(len==length)
      printf("palidrome");
      else
      printf("not a palidrome");
      top = len-1;
 }
void display()
{
	if (top == -1)
	{
		printf("Stack under flow");
		return;
	}
	else
	{
		printf("the element in the stack\n");
		for (int i = top; i >= 0; i--)
		{
			printf("%d ", stack[i]);
		}
		printf("\n");
	}
}

void main()
{
	int choice;
	for (;;)
	{
		printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");
		printf("Enter the choice: \n");
		scanf("%d", &choice);
		switch (choice)
		{

		case 1:
			push();
			break;
		case 2:
			pop();
			break;
        case 3 : pali();
            break;
		case 4:
			   display();
			break;
		case 5:
			exit(0);
			break;
		}
	}
}