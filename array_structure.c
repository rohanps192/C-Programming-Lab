#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[30];
	float mark;
};
void main()
{
	struct student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter student %d details\n",i+1);
		printf("Enter Name:");
		scanf("%s",&s[i].name);
		printf("Enter RollNo");
		scanf("%d",&s[i].rollno);
		printf("Enter mark");
		scanf("%f",&s[i].mark);
	}
	printf("STUDENTS DETAILS\n");
	for(i=0;i<3;i++)
	{
		printf("Student %d\n",i+1);
		printf("Name:%s\n",s[i].name);
		printf("RollNo:%d\n",s[i].rollno);
		printf("Mark:%1.f\n",s[i].mark);
	}
}
