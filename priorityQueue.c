//Priority Queue
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define size 20
int main()
{
	int item[size];
	int rear=-1,front=0,ch;
	printf("\nMenu for the program\n");
	label1:
	label2:
	printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
	do
	{
		printf("\nEnter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					int d;
					if(rear==size-1)
					{
						printf("Queue is full\n");
					}
					else
					{
						printf("\nEnter data to be inserted:\n");
						scanf("%d",&d);
						rear++;
						item[rear]=d;
					}
					break;
				}
			case 2:
				{
					int i,temp,x;
					x=item[front];
					if(rear<front)
					{
						printf("Queue is empty\n");
						return 0;
					}
					else
					{
						for(i=front+1;i<rear;i++)
						{
							if(x>item[i])
							{
								temp=i;
								x=item[i];
							}
						}
						for(i=temp;i<rear-1;i++)
						{
							item[i]=item[i+1];
						}
						rear--;
						goto label2;
					}
				}
				break;
			case 3:
				{
					int i;
					if(rear<front)
					{
						printf("Queue is empty\n");
					}
					else
					{
						printf("Items of queue are :\n");
						for(i=front;i<=rear;i++)
						{
							printf("%d",item[i]);
						}
					}
					break;
				}
			case 4:
				exit (0);
			default:
				printf("\nInvalid Choice");
				goto label1;
		}
	}while(ch<5);
	return 0;
}
