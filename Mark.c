#include<stdio.h>
#include<conio.h>
void main()
{
	int a,m1,m2,m3,avg;
	char name[20];
	printf("Enter the name:");
	scanf("%s",&name);
	printf("Enter the rollno:");
	scanf("%d",&a);
	printf("Enter the marks of 3 subjects:");
	scanf("%d %d %d",&m1,&m2,&m3);
	avg=(m1+m2+m3)/3;
	printf("Average mark is:%d",avg);
	if(avg<20)
	{
		printf("Failed");
	}
	else
	{
		if(avg<30)
		{
			printf("\nD grade");
		}
		else if(avg<50)
		{
			printf("\nC grade");
		}
		else if(avg<70)
		{
			printf("\nB grade");
		}
		else if(avg<=80)
		{
			printf("\nA grade");
		}
		else
		{
			printf("\n INVALID MARK");
		}
	}
}

