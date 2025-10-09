/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:4/10/2025
Description:for program to enter the password
*/
#include <stdio.h>
int main(int argc, char** argv)
{

	//variables decraration
	int password;
	int correct_password=1234;//start
	
	do{
		// prompt user to enter the password
		printf("Enter the password:  ");
		scanf("%d",&password);
		
	}while(password != correct_password);//stop
	
	printf("Access Guranted\n");//display when correct password is entered
	return 0;

}
