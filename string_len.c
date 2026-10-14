#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	printf("Enter a string:");
	gets(str);
	printf("length of the string:%d",stringlen(str));
}
int stringlen(char str[100])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
