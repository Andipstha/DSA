//Sequential Search
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,a[100],key,flag=0;
	printf("\nEnter the size of the array to be formed :");
	scanf("%d",&n);
	printf("\nEnter the element in array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the item to be searched :");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag =1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("\nSuccessful Search");
		printf("\nPosition = %d",i+1);
	}
	else
	{
		printf("\nUnsuccessful Search");
	}
	return 0;
}
