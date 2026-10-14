#include<stdio.h>
#include<conio.h>
void display(int a[],int n)
{
	int i;
	printf("\nReverse:");
	for(i=n-1;i>=0;i--)
	{
		printf(" %d",a[i]);
	}
}
void main()
{
	int i,num[]={10,20,30,40,50};
	printf("Array elements :");
	for(i=0;i<5;i++)
	{
		printf(" %d",num[i]);
	}
	display(num,5);
}
