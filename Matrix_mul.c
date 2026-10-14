#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,r1,c1,r2,c2;
	int a[10][10],b[10][10],c[10][10];
	printf("Enter the rows and columns of 1st matrix:");
	scanf("%d %d",&r1,&c1);
	printf("Enter the rows and columns of 2nd matrix:");
	scanf("%d %d",&r2,&c2);
	if(c1!=r2)
	{
		printf("Matrix multiplication can't perform'");
	}
	else
	{
		printf("Enter the elements of 1st matrix\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("1st matrix\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		printf("Enter the elements of 2nd matrix\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		printf("2nd matrix\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		printf("Resultant matrix:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
}
