#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter 3 numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greater");
		}
	}
	 else if(b>a)
	{
		if(b>c)
		{
			printf("b is greater");
		}
	
	else
	{
		printf("c is greater");
	}
   }  
}


