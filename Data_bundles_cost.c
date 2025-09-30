/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:29/9/2025
Description:Program to identify data bundles cost
*/


#include <stdio.h>
int main()
{
		// variable decraration
	int Option;
	
	//display the menu
	printf(" Option     Bundle   Cost(KES)\n");
	printf("  1.         100mbs     50    \n");
	printf("  2.         500mbs     200   \n");
	printf("  3.         1GB        350   \n");
	printf("  4.         2GB        600   \n");
	
	//prompt user to enter their option
	printf("Enter you Option (1-4):" );
	scanf("%d",&Option);
    
    //switch the case and display to user the results
    switch(Option) {
        case 1:
            printf("You selected: 100 mbs, Cost: 50 KES\n");
            break;
        case 2:
            printf("You selected: 500 mbs, Cost: 200 KES\n");
            break;
        case 3:
            printf("You selected: 1 GB, Cost: 350 KES\n");
            break;
        case 4:
            printf("You selected: 2 GB, Cost: 600 KES\n");
            break;
        default:
            printf("Invalid choice\n");
    }
	
	return 0;//execution successful
}