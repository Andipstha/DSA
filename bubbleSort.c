//Bubble Sort
#include<stdio.h>
#include<conio.h>
int main()
{
	int i ,n,a[100],j,temp;
	printf("\nEnter the size of the array to be stored :");
	scanf("%d",&n);
	printf("\nEnter the list of elements to be sorted :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n The bubble sorted list of numbers are :");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
