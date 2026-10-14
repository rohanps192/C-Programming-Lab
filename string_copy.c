#include<stdio.h>
#include<conio.h>
void strcopy(char str1[100],char str2[100]);
void main()
{
	char str1[100],str2[100];
	printf("Enter a string:");
	gets(str1);
	strcopy(str1,str2);
	printf("Copied string:%s",str2);
}
void strcopy(char str1[100],char str2[100])
{
	int i=0;
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
}
