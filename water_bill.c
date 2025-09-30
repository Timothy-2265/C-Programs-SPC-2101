/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:29/9/2025
Description:Program to calculate water bill
*/
#include <stdio.h>
int main()
{
	//variable decraration
int units;
float bill;

//display a space on the screen
printf("................................\n");
	
	//prompt user to enter units consumed
	printf("Enter units consumed: ");
	scanf("%d",&units);
	
	//calculate the bill
	if(units>=0 && units<=30){
		bill=units*20;
	}
	else if(units<=60){
	
		bill=units*25;
	}
	else if(units>60){
		bill=units*30;
	}
	//display to the user results
	printf("Total bill= %.2f KES\n",bill);
	return 0;
}