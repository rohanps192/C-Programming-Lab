#include<stdio.h>
#include<conio.h>
int display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void main()
{
	int num[]={10,20,30,40,50};
	display(num,5);
}
