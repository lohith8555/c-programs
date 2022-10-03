#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,opt;
	printf("Enter num1 :");
	scanf("%d",&a);
	printf("Enter num2 :");
	scanf("%d",&b);
	printf("Arithmetic Operations :\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Divition");
	printf("\n\nEnter option :");
	scanf("%d",&opt);
	printf("\n");
	switch(opt)
	{
		case 1:
			{
				c=a+b;
				printf("sum = %d",c);
				break;
			}
		case 2:
			{
				c=a-b;
				printf("ans = %d",c);
				break;
			}
		case 3:
			{
				c=a*b;
				printf("ans = %d",c);
				break;
			}
		case 4:
			{
				if(b==0)
				{
					break;
				}
				else
				{
					c=a/b;
					printf("ans = %d",c);
				}
				break;
			}
		default:
			{
				printf("Invalid Option");
			}
	}
	return 0;
}
