#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10
int main()
{
	int cq[size];
	int rear=size-1,front=size-1;
	int ch,i,n;

	label1:
	printf("\nMENU: \n");
	printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				int ele;
				if((rear+1)%size==front)
				{
					printf("\nQueue is full.");
				}
				else
				{
				rear=(rear+1)%size;
				printf("\nEnter the element you want to insert: ");
				scanf("%d",&ele);
				cq[rear]=ele;
				}
				goto label1;
				break;	
			}
		case 2:
		{
			if(rear==front)
			{
				printf("Queue is empty\n");
			}
			else
			{
				front=(front+1)%size;
				printf("Deleted item is:");
				printf("%d\n",cq[front]);
			}
			goto label1;
			break;
		}	
		case 3:
		{
			int i;
			if(rear==front)
			{
				printf("Queue is empty\n");
			}
			else
			{
				printf("Items of queue are:\n");
				for(i=(front+1)%size;i!=rear;i=(i+1)%size)
				{
					printf("%d\t",cq[i]);
				}
				for(i=front;i<=rear;i++)
				{
				printf("%d\t",cq[i]);
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
