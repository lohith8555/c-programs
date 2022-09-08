#include<stdio.h>
int main()
{
	int sn=0,sp=0,n=0,p=0;
	float pavg=0,navg=0;
	int num;
	printf("enter-1 to exit....\n");
	printf("enter value:");
	scanf("%d",&num);
	if(num!=-1)
	{
		printf("end...");
	}
	else
    {
    	while(num!=-1)
    	{
		    if(num<0)
		    {
			   sn=sn+num;
			    n++;
     	    }
     	    else
     	    {
     		sp=sp+num;
     		p++
      	    }
      	
      }
      	printf("enter value:");
      	scanf("%d",&num);
      	if(num==-1)
      	{
		  printf("\nEND...\n");
	    }     
	}
}
	
	

