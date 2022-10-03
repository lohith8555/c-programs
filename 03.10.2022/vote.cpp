#include<stdio.h>
int main()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	if(age>=18)
	printf("eligible");
	else
	printf("not eligingle");
	if(age<1)
	printf("invalid input...");
	return 0;
}
