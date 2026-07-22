#include<stdio.h>
#include<conio.h>
void main()
{
	int p,n,r;
	float I;
	printf("Enter the principle amount:");
	scanf("%d",&p);
	printf("Enter the number of years:");
	scanf("%d",&n);
	printf("Enter the rate of interest:");
	scanf("%d",&r);
	I=(p*n*r)/100;
	printf("Simple interset is:%f",I);
}
