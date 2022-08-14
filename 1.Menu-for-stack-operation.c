#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10
int main()
{
	int top=-1;
	int item[max];
	int i,choice,element;
	printf("\nEnter the 10 elements in the stack :\n");
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
					printf("\n!!!The elements is inserted!!!\n\n");
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
					printf("\nItem is Deleted\n\n");
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
		default :
			{
				printf("\n!!!Invalid Choice!!!");
				goto label1;
				break;
			}
	}
	return 0;
}
