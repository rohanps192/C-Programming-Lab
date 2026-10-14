#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],n,i,key;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			printf("Value found at %d",i+1);
			break;
		}
	}
	if(key!=a[i])
	{
		printf("Value not found");
	}
}
