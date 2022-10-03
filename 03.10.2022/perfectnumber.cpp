#include<stdio.h>
int main()
{
	int n,r,i,sum=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	if(n<1)
	{
		printf("Invalid Inputs...");
	}
	else
	{
		for(i=1;i<n;i++)
		{
			r=n%i;
			if(r==0)
			{
				sum+=i;
			}
		}
	}
	if(sum==n)
	{
		printf("Perfect Number");
	}
	else
	{
		printf("Not a Perfect Number");
	}
	return 0;
}
