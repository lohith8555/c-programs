#include<stdio.h>
int main()
{
	int f=1,i,a;
	printf("Enter the number :");
	scanf("%d",&a);
	if(a<1)
	{
		printf("Invalid Input...");
	}
	else
	{
		for(i=1;i<=a;i++)
		{
			f=f*i;
		}
		printf("Factorial = %d",f);
	}
	return 0;
}
