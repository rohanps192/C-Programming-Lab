#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter 2 numbers:");
	scanf("%d %d",&a,&b);
	printf("Bitwise AND:%d\n",a&b);
	printf("Bitwise OR:%d\n",a|b);
	printf("Bitwise XOR:%d\n",a^b);
	printf("Bitwise NOT a:%d\n",~a);
	printf("Left shift a:%d\n",a<<1);
	printf("Right shift a:%d\n",a>>1);		
}
