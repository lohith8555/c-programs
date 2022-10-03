#include<stdio.h>
int main()
{
	int n1,n,rev=0,num;
	printf("Enter the Digits :");
	scanf("%d",&n);
	n1=n;
	while(n1!=0)
	{
		num=n1%10;
		rev=rev*10+num;
		n1=n1/10;
	}
	printf("reversed digits : %d",rev);
	return 0;
}
