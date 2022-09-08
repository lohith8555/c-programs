#include <stdio.h>
int main()
{
	// the amount of income
	float amount;
	//tax
	float tax=0;
	//Get the amount of income from the user
	printf("Enter the amount of income: ");
	scanf("%f",&amount);
	// If income is less than 150,000, then no tax
	if(amount<=150000){
		tax=0;
		// If income in the range of 150,001-300,000, then charge 10% tax
	}else if(amount>150000 && amount<=300000){
		tax=amount*0.1;
		//If income is in the range of 300,001-500,000, then charge tax of 20%
	}else if(amount>300000 && amount<=500000){
		tax=amount*0.2;
		// If income is above 500,001, then charge tax of 30%
	}else{
		tax=amount*0.3;
	}
	//Display result
	if(tax==0){
		printf("\nNo tax.\n");
	}else{
		printf("\nThe tax = $%.2f\n",tax);
	}
	//Delay
	getchar();
}
