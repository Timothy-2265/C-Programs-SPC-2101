/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:23/10/2025
Description:Program to change temperature to degrees
*/
#include <stdio.h>

int celsius(int fahrenheit );

void main(){
	int F;
	
	printf("Enter temperature in fahrenheit  :");
	scanf("%d",&F);
	
	int C;
	
     C=(F-32)*5/9;
     
     printf("\nThe temperature is %d °c",C );
}
int celsius(int fahrenheit){
	int c;
    c=(fahrenheit-32)*5/9;
    return c;
}