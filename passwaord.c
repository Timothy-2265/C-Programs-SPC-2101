/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:4/10/2025
Description:for program to enter the password
*/
#include <stdio.h>
int main(int argc, char** argv)
{
	
	int password;
	int correct_password=1234;
	
	do{
		printf("Enter the password:  ");
		scanf("%d",&password);
		
	}while(password != correct_password);
	
	printf("Access Guranted\n");
	return 0;
}