/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:12/9/2025
Description:prompt user to enter;height,bank balance,phone number
*/
#include <stdio.h>
int main()
{
	//variable decraration
 	int height;
 	
 	int bank_balance;
 	
 	char phone[10];
 	
	// prompt user to enter
	 printf("Enter height:"); 
	 
	 	scanf("%d",&height);
	 	
	 printf("Enter bank_balance:");
	 
	 scanf("%d",&bank_balance);
	 
	 printf("Enter phone_number:");
	 
 	 
 	 scanf("%s",phone);
 	 
	   printf("height=%d feet\n",height);
	   
	  printf("bank_balance=sh.%d\n",bank_balance);
	   
	  printf("phone:%s\n",phone);
	return 0;
}
