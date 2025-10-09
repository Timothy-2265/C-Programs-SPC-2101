/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:4/9/2025
Description:ATM program to withdraw amount
*/
#include <stdio.h>
int main()
{
	int balance=6000;
	int amount;
	
	printf("..............................\n");
	
	printf("DO NOT SHARE YOUR PIN\n");
	printf("\nThe balance is 6000\n");
	
	while(balance>0)
	{
		printf("Enter amount to withdraw\n");
		scanf("%d",&amount);
		
		balance -= amount	;
		
		printf("The balance is %d\n",balance);
	}
	printf("insufficient balance\n");
	
	
	return 0;
}