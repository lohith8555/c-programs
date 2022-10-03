#include<stdio.h>
int main()
{
	int p,q,r,i,c=0;
	printf("enter P :");
	scanf("%d",&p);
	printf("enter Q :");
	scanf("%d",&q);
	printf("enter R :");
	scanf("%d",&r);
	for(i=p;i<=q;i++)
	{
		if(c!=r)
		{
			printf("%d ",i);
			c++;
		}
		else
		{
			c++;
			continue;
		}
	}
	return 0;
}
