/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:23/10/2025
Description:Program to calculate electric bill
*/
#include <stdio.h>

int electric_bill(int units);

void main(){
	
	printf("............................................\n");
	
int units;

printf("Enter the  number of units consumed  :");
scanf("%d",&units);

int total=electric_bill(units);

printf("\nThe total electric_bill=sh.%d\n",total);

printf("\nTHANKYOU\n");
	
}
int electric_bill(int units){
	int bill=0;
if (units <= 100)
        bill=units * 10;
    else if (units <= 200)
        bill=100 * 10 + (units - 100) * 15;
    else
        bill=100 * 10 + 100 * 15 + (units - 200) * 20;
        return bill;
}
