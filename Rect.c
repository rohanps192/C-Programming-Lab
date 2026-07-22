#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,area,p;
	printf("Enter the length and breadth:");
	scanf("%d %d",&a,&b);
	area=a*b;
	p=2*(a+b);
	printf("Area is:%d\n",area);
	printf("Perimeter is:%d",p);
}
