#include<stdio.h>
#include<conio.h>
void main()
{
	int yr;
	printf("Enter the year:");
	scanf("%d",&yr);
	(yr%4==0)?(yr%100!=0?printf("the year %d is a leap year",yr):(yr%400==0?printf("the year %d is aleap year",yr):printf("the year %d is not a leap year",yr))):printf("the year %d is not a leap year",yr);
}
