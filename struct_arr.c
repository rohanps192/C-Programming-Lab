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
	struct student s;
	printf("Enter RollNo:");
	scanf("%d",&s.rollno);
	printf("Enter the name:");
	scanf("%s",&s.name);
	printf("Enter the mark:");
	scanf("%f",&s.mark);
	printf("Student Details\n");
	printf("Roll No:%d\n",s.rollno);
	printf("Name:%s\n",s.name);
	printf("Mark:%f\n",s.mark);
	//return 0;
}
