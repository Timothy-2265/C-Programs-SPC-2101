/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:23/10/2025
Description:Program to calculate fare
*/
#include <stdio.h>

int Total_fare(int distance,int fare);

void main(){
	
	int result;
	int distance;
	
	printf("Enter the distance covered: ");
	scanf("%dKM",&distance);
	
   result=Total_fare(distance, 50);
   
   printf("The Total_fare=KSH.%d",result);
}

int Total_fare(int distance,int fare){
	
	int t;
	
	t=distance*fare;
	
	return t;
	
}