#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,choice,sum,sub,mul,div;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multipilcation\n");
	printf("4.Division\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			sum=a+b;
			printf("Sum = %d",sum);
			break;
			case 2:
				sub=a-b;
				printf("Difference =%d",sub);
				break;
				case 3:
					mul=a*b;
					printf("Product = %d",mul);
					break;
					case 4:
						div=a/b;
						printf("Division =%d",div);
						break;
						default:
							printf("INVALID CHOICE");
							
	}
}
