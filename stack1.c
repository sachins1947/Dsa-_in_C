#include <stdio.h>
#include <stdlib.h>
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
	
		printf("Enter the number of element ");
		scanf("%d", &n);
		printf("enter the element in the stack");
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &item);
			stack[++top] = item;
		}
	
	
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
		printf("enter the no of element to delete");
		scanf("%d", &a);
		for (int j = 0; j < a; j++)
		{

			printf("the deleted element %d\n", stack[top--]);
		}
	}
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