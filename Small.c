#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("%d is smaller",a);
		}
		else
		{
			printf("%d is smaller",c);
		}
	}
	else if(b<c)
	{
		printf("%d is smaller",b);
	}
	else
	{
		printf("%d is smaller",c);
	}
}

