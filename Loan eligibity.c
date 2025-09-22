/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:22/9/2025
Description:program to impliment whether you are elegible for loan
*/
#include <stdio.h>
int main(){
	
	//variable decraration
	float age;
	float Annual_income;
	
	//prompt user to enter age and annual income
	printf("Enter your age:");
	scanf("%f",&age);
	
	printf("Enter your Annual_income(sh):");
	scanf("%f",&Annual_income);
	
	
	//check the eligibility
		if(age>=21,Annual_income>=21000)
	
	{printf("Cogratulation you qualify for loan.\n");}
		else
		
		{printf("Unfortunately,we are unable to offer you a loan at this time");}
	
	
	
		return 0;
}