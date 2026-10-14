#include<stdio.h>
#include<conio.h>
int compare(char str1[100],char str2[100]);
void main()
{
	char str1[100],str2[100];
	printf("Enter  1st string:");
	gets(str1);
	printf("Enter 2nd string:");
	gets(str2);
	if(compare(str1,str2))
	{
		printf("Same");
	}
	else
	{
		printf("Not same");
	}
	
}
int compare(char str1[100],char str2[100])
{
	int i=0;
	while(str1[i]!='\0'&&str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			return 0;
		}
		i++;
	}
	if(str1[i]=='\0'&&str2[i]=='\0')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
