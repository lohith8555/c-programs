#include<stdio.h>
int main()
  {
   	struct student
     	{
      int regno;
      char name[20];
      float mark;
      };
`12345uct student s1;
   	struct student *ptr;
   	ptr=&s1;
	
   	    printf("Enter details of student :: \n");
    	printf("\nEnter Name of student :: ");
    	scanf("%s",ptr->name);
    	printf("\nEnter Regno of student :: ");
    	scanf("%d",&ptr->regno);
    	printf("\nEnter Mark of student :: ");
    	scanf("%f",&ptr->mark);
   	
	printf("\nEntered details of student are :: \n");
    	printf("\nName : %s \n\nRollNo: %d \n\nMark: %.02f\n\n",ptr->name,ptr->regno,ptr->mark);
   	return 0;
  }
