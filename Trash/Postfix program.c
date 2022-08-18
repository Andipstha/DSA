#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n,a[100];
	int ch;
	printf("\nEnter the size of the array :");
	scanf("%d",&n);
	printf("\nEnter a valid postfix only integer:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	label:
	printf("\n\nEnter the symbol of the postfix :");
	printf("\n1.Multiplication '*'");
	printf("\n2.Addition '+'\n");
	scanf("%d",&ch);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
	switch(ch)
		{
			case 1:
				{
					a[i+1]=a[i+1]*a[i+2];
					printf("\nFirst operation :%d",a[i+1]);
					goto label;
					break;
				}
			case 2:
				{
					a[i]=a[i]+a[i+1];
					printf("\n Answer is : %d",a[i]);
					exit(0);
				}
		}
	}
	return 0;
}
