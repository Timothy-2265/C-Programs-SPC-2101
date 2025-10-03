/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:22/9/2025
Description:First year computer science units
volume=PI*r^2*h
surface area=(2*PI*r^2)+(2*PI*r*h)
*/
#include<stdio.h>
int main()
{
	//variable decraration
	float PI=3.142;
	float Radius;
	float height;
	float surface_area;
	float volume;
	
	//prompt user to enter height and radius of the cylinder
	printf("Enter Radius of the cylinder\n");
	
	scanf("%f",&Radius);
	
	printf("Enter height of the cylinder\n");
	
	scanf("%f",&height);
	
	//formula for volume and surface area calculation for cylinder
	volume=PI*Radius*Radius*height;
surface_area=(2*PI*Radius*Radius)+(2*PI*Radius*height);

//print the output to user screen
printf("volume of the cylinder=%.2f",volume);
printf("\nsurface_area of cylinder=%.2f",surface_area);
	
	
	
	
	
	
	
	return 0;

}
