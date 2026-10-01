#include<stdio.h>
#include<conio.h>
int main()
{
	int i,arr[3]={5,10,15};
	int n=sizeof(arr)/sizeof(arr[0]);
	int(*ptr)[3];
	ptr=&arr;
	for(i=0;i<n;i++)
	{
		printf(" %d",(*ptr)[i]);
	}
	return 0;
}
