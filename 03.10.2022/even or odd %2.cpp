#include<stdio.h>
int main()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	if(n%2==0)
	{
	    printf("\n%d is divisable by 2\n",n);
	    printf("it is even number");
	}
	else
	{
		printf("\n%d is not divisable by 2\n",n);
		printf("it is odd number");
	}
	return 0;

}
