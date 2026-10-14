#include<stdio.h>
#include<conio.h>
void concat(char str1[100],char str2[100]);
void main()
{
	char str1[100],str2[100];
	printf("Enter 1st string:");
	gets(str1);
	printf("Enter 2nd string:");
	gets(str2);
	concat(str1,str2);
	printf("Concatenated string:%s",str1);
	
}
void concat(char str1[100],char str2[100])
{
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
}
