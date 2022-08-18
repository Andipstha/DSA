//circular queue
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define size 5
int main()
{
	int item[size];
	int rear=0,front=0;
	int ch;
	rear=size-1;
	front=size-1;
	label1:
	printf("\nMenu Program:\n");
	label2:
	printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
	do{
		printf("\nEnter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				
				{
					int d;
					if ((rear+1)%size==front)
					{
						printf("\nQueue is full\n");
					}
					else
					{
						rear=(rear+1)%size;
						printf("\nEnter data to be inserted:");
						scanf("%d",&d);
						item[rear]=d;
					}
				}
				break;
			case 2:
			
				{
					if(rear==front)
					{
						printf("\nQueue is Empty");
					}
					else
					{
						front=(front+1)%size;
						printf("\nDeleted item is :");
						printf("%d",item[front]);
					}
				}
				break;
			case 3: 
			
				{
					int i;
					if(rear==front)
					{
						printf("\nQueue is empty");
					}
					else
					{
						printf("\nItems in Queue are :\n");
						for((i=front+1)%size;i!=rear;i=(i+1)%size)
						{
							printf("%d",item[i]);
						}
						printf("%d",item[rear]);
					}
					goto label2;
				}
			case 4 :
				exit(0);
			default:
				printf("\nInvalid Choice");
				goto label1;
		}
	}while(ch<5);
	return 0;
}
