//Menu driven C program to implement primitive operation of stack.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
int main()
{
	int top=-1;
	int item[max];
	int i,choice,element;
	printf("\nEnter the elements in the stack :");
	for(i=0;i<max;i++)
	{
		scanf("%d",&item[i]);
	}
	label1:
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
	printf("\nEnter your choice :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				if(top==max-1)
				{
					printf("\nStack Overflow");
					exit (0);
				}
				else
				{
					printf("\nEnter the element you want to insert :");
					scanf("%d",&element);
					top++;
					item[top]=element;
					printf("\n!!!The elements is inserted!!!");
				}
				goto label1;
				break;
			}
		case 2:
			{
				if(top == -1)
				{
					printf("\nStack Empty");
					exit (0);
				}
				else
				{
					printf("\nItem is Deleted");
				}
				goto label1;
				break;
			}
		case 3:
			{
				if(top == -1)
				{
					printf("\nStack is Empty \n");
				}
				else
				{
					for(i=top;i>=0;i--)
					{
						printf("\n %d",item[i]);
					}
					printf("\n");
				}
				goto label1;
				break;
			}
		case 4:
			{
				exit (0);
			}
		default:
			{
				printf("\n!!!Invalid choice!!!");
				goto label1;
				break;
			}
	}
	return 0;
}
