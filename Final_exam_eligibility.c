/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:29/9/2025
Description:program to check eligibility to take exams
conditions:class attedance>=75%,average mark>=40
*/
#include<stdio.h>
int main()
{
	//variable decraration
	float class_attedance;
	float average_marks;
	
	//prompt user to enter the class_attedance
	printf("Enter you class_attedance percentage:");
	scanf("%f",&class_attedance);
	
	//prompt user to enter average_marks
	printf("Enter your average_marks:");
	scanf("%f",&average_marks);
	
	//check eligibility and display to user
	if(class_attedance>=75 && average_marks>=40)
	{
		printf("Eligible\n");
	}
	else
	{
		printf("Not eligible\n");
	}
	
	
	return 0;
}