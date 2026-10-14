#include<stdio.h>
#include<conio.h>
int change(int x)
{
	printf("x=%d\n",x);
	x=20;
	printf("x=%d\n",x);
}
void main()
{
	int a=10;
	printf("Before call a=%d\n",a);
	change(a);
	printf("After call a=%d\n",a);
}

