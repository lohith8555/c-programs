#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char string[20],temp;
	int i,length;
	printf("enter string:");
	scanf("%s",string);
	length=strlen(string)-1;
	for(i=0;strlen(string)/2;i++)
	{
		temp=string[i];
		string[i]=string[length];
		string[length--]=temp
	}
	printf("\n reverse string:%s",str);
	getch()
}
