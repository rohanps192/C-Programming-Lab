#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10;
	int *p;
	p=&a;
	printf("value of a=%d\n",a);
	printf("Address of a=%d\n",&a);
	printf("value stored in p=%d\n",*p);
	printf("%d",p);
	return 0;
}
