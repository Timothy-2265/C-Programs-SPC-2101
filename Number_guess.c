/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:4/9/2025
Description:Number guessing program
*/
#include <stdio.h>
int main()
{
	//variables decraration
	int secret_number;
	int attempts=0;//start
	int guess;
	int start_number;

	//prompt the user to enter starting number
	printf("Enter start_number\n");
	printf("The number should be between 10-20\n");
	scanf("%d",&start_number);
	if (start_number>20 && secret_number <10){
		printf("Invalid");
	}
	
	secret_number=start_number-3;//simple formular to get the secret number
	
	while(guess !=secret_number)//stop
	{
		//prompt user to enter the guess number
		printf("Enter your guess :\n");
		scanf("%d",&guess);
		attempts++;//increment
		

		//condition
		if (guess>secret_number){
			printf("Too high\n");
		}
		else if (guess<secret_number){
			printf("Too low\n");
		}
		else{
			printf("Cogratulation you guessed the number\n");
			printf("Number of attempts   %d\n",attempts);
		}
		
		
		
	}
	
	return 0;

}
