#include <stdio.h>
#include <stdlib.h>
#define stacksize 5
int stack[stacksize];
int top = -1;
int item;
void push(){

	if (top == stacksize - 1)
	{
		printf("stack overflow");
		return;
	}
		printf("enter the element in the stack");
			scanf("%d", &item);
			stack[++top] = item;
}

void pop()
{
	
	if (top == -1)
	{
		printf("stack underflow");
		return;
	}
	
		item = stack[top--];
			printf("the deleted element %d\n",item);
	
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
		case 3:
			display();
			break;
		case 4:
			exit(0);
			break;
		}
	}
}