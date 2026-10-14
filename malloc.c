#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("Memory allocation failed");
		return 1;
	}
	printf("Enter elemnts:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("Elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d",p[i]);
	}
	free(p);
	return 0;
}
