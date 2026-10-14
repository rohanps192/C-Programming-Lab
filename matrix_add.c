#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,r,c,a[10][10],b[10][10],sum[10][10];
	printf("Enter the number of rows:");
	scanf("%d",&r);
	printf("Enter the number of columns:");
	scanf("%d",&c);
	printf("Enter the elements of 1st matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}	
	printf("Enter the elements of 2nd matrix :");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("Sum of the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   sum[i][j]=a[i][j]+b[i][j];
		   printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
			
}
