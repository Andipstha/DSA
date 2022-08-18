//Binary Search
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[100],i,mid,mid1,l,key ,flag=0;
	printf("\nEnter the size of array to be formed :");
	scanf("%d",&n);
	int h=n-1;
	printf("\nEnter the element in an array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the item to be searched :");
	scanf("%d",&key);
	while(l<=h)
	{
		mid=l+h;
		mid1=mid/2;
		if(a[mid1]<key)
		{
			l=mid1+1;
		}
		else if (a[mid1]>key)
		{
			h=mid1-1;
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
