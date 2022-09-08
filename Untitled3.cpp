#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char string[20],temp;
	int i,length;
	printf("%s",string);
	length=strlen(string)-1;
	for(i=0;i<strlen(string)/2:i++)
	{
		temp=string[i];
		string[i]=string[length];
	}
 printf("\n reverse string:%S",string);
 getch();
}
