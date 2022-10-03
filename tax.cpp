#include<stdio.h>
int main()
{
	int n,tax,sum;
	printf("enter income :");
	scanf("%d",&n);
	if(n<1)
	{
		printf("Invalid input...");
	}
	else if(n<=150000)
	{
		printf("\nNo tax");
		tax=0;
	}
	else if(n>150000 && n<=300000)
	{
		tax=n*0.1;
		printf("\n2tax = %d",tax);

	}
	else if(n>300000 && n<=500000)
	{
		tax=n*0.2;
		printf("\n2tax = %d",tax);

	}
	else
	{
		tax=n*0.3;
		printf("\n2tax = %d",tax);

	}
	return 0;
}
