#include<stdio.h>
struct student
{
	int regno;
	char name[10];
	int mark;
};
	int main(){
	struct student s1;
	s1.regno=192111097;
	gets(s1.name);
	s1.mark=78;
	printf("regno=%d",s1.regno);
	printf("name=%s",s1.name);
	printf("mark=%d",s1.mark);
	
}  

