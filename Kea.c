#include<stdio.h>
#include<conio.h>
int read(int a[10][10],int b[10][10]);
int add(int a[10][10],int b[10][10]);
int view(int a[10][10],int b[10][10]);
void main()
{
	int a[10][10];
	int b[10][10];
	read(a,b);
	add(a,b);
	view(a,b);
}
int read(int a[10][10],int b[10][10])
{
	int i,j,r,c;
	printf("Enter the number of rows:");
	scanf("%d",&r);
	printf("Enter the number of columns:");
	scanf("%d",&c);
	printf("Enter the 1st matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("1st matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the 2nd matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("2nd matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
}
int add(int a[10][10],int b[10][10])
{
	int i,j,r,c;
	int sum[10][10];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
}
int view(int a[10][10],int b[10][10])
{
	int i,j,r,c;
	int sum[10][10];
	printf("Sum is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}
