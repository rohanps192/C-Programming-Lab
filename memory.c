#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n,newn;
	printf("Enter number of elemnets:");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("Memory allocation failed");
		return 1;
	}
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("Enter new size:");
	scanf("%d",&newn);
	p=(int*)realloc(p,newn*sizeof(int));
	if(p==NULL)
	{
		printf("Memory allocation failed");
		return 1;
	}
	if(newn>n)
	{
	printf("Add elements:\n");
	for(i=n;i<newn;i++)
	{
		scanf("%d",&p[i]);
	}
printf("Elements\n");
for(i=0;i<newn;i++)
{
	printf("%d",p[i]);
}
}
else
{
for(i=0;i<n;i++)
{
	printf("%d",p[i]);
}
}
free(p);
return 0;
}
