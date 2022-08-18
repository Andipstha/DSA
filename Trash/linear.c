#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10

int main()
{
	int q[size];
	int rear=-1,front=0;
	int ch,i;
	label1:
	printf("\nMENU:\n");
	printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
	
			int ele;
			printf("\nEnter the data to be inserted:");
			scanf("%d",&ele);
			if(rear==size-1)
			{
				printf("Queue overflow.\n");
			}
			else
			{
				rear++;
				q[rear]=ele;
				
			}
			goto label1;
			break;	
		}	
		case 2:
		{
			int ele;
			if(rear<front)
			{
				printf("Queue is empty.\n");
			}
			else
			{
				ele=q[front];
				front++;
				printf("Deleted item is :");
				printf("%d\n",ele);
			}
			goto label1;
			break;	
		}
		case 3:
		{
			int i;
			if(rear<front)
			{
				printf("Queue is empty.\n");
			}
			else
			{
				for(i=front;i<=rear;i++)
				{
					printf("%d\t",q[i]);
				}
			}
			goto label1;
			break;	
			
		}	
		case 4:
		{
			exit(0);	
		}
	}
	return 0;
}

