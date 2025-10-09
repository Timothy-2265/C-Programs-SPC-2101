/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:4/9/2025
Description:Number guessing program
*/
#include <stdio.h>
int main()
{
	int secret_number;
	int attempts=0;
	int guess;
	int start_number;
	
	printf("Enter start_number\n");
	printf("The number should be between 10-20\n");
	scanf("%d",&start_number);
	if (start_number>20 && secret_number <10){
		printf("Invalid");
	}
	
	secret_number=start_number-3;
	
	while(guess !=secret_number)
	{
		printf("Enter your guess :\n");
		scanf("%d",&guess);
		attempts++;
		
		
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