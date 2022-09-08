#include<stdio.h>
#include<string.h>
int main()
{
	char p1[40],p2[30];
	printf("enter the username:");
	scanf("%s",p2);
	
	printf("renter the user:");
	scanf("%s",p2);
	if((strcmp(p1,p2)==0))
	{
		printf("username is valid");
	}
	else
	{
	printf("the username is invalid");
    }
}
