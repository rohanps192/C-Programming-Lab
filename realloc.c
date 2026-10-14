#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int *ptr=malloc(5*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	for(i=0;i<5;i++)
	{
		ptr[i]=i+1;
	}
	int *temp=realloc(ptr,10*sizeof(int));
	if(temp==NULL)
	{
		printf("Memory allocation failed\n");
		free(ptr);
		return 1;
	}
	ptr=temp;
	for(i=5;i<10;i++)
	{
		ptr[i]=i+1;
	}
	for(i=0;i<10;i++)
	{
		printf(" %d",ptr[i]);
	}
	return 0;
}
