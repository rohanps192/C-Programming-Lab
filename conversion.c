#include<stdio.h>
#include<conio.h>
void main()
{
	char c='E';
	int a=65;
	float f=12.5;
	double d=13.55;
	printf("Type conversions\n");
	printf("char to int : %d\n",(int)c);
	printf("int to float:%f\n",(float)a);
	printf("float to double:%lf\n",(double)f);
	printf("float to int:%d\n",(int)f);
	printf("int to char:%c",(char)a);
}
