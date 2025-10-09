/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:4/9/2025
Description:ATM program to withdraw amount
*/
#include <stdio.h>
int main()
{
	// variable decraration
	int balance=6000;//start
	int amount;
	
	printf("..............................\n");
	
	printf("DO NOT SHARE YOUR PIN\n");
	printf("\nThe balance is 6000\n");// print initial balance
	
	while(balance>0)//stop
	{
		//prompt user enter amount to withdraw
		printf("Enter amount to withdraw\n");
		scanf("%d",&amount);
		
		balance -= amount	;//deduction per withdrawal
		
		printf("The balance is %d\n",balance);//balance after withdrawal
	}
	printf("insufficient balance\n");
	
	
	return 0;

}
