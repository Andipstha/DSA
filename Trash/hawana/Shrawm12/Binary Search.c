//Binary Search
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[100],i,mid1,mid2,l,search ,flag=0;
	printf("\nEnter the size of array to be formed :");
	scanf("%d",&n);
	int h=n-1;
	printf("\nEnter the list of items to be stored :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the item to be searched :");
	scanf("%d",&search);
	while(l<=h)
	{
		mid1=l+h;
		mid2=mid1/2;
		if(a[mid2]<search)
		{
			l=mid2+1;
		}
		else if (a[mid2]>search)
		{
			h=mid2-1;
		}
		else
		{
			flag =1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("\nSuccessful Search");
	}
	else
	{
		printf("\nUnsuccessful Search");
	}
	return 0;
}
