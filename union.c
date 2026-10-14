#include<stdio.h>
#include<conio.h>
union Data
{
	int number;
	float decimal;
	char character;
};
int main()
{
	union Data d;
	d.number=25;
	printf("Int value:%d\n",d.number);
	d.decimal=15.5;
	printf("Decimal value:%f\n",d.decimal);
	d.character='A';
	printf("Char value:%c",d.character);
	return 0;
}
