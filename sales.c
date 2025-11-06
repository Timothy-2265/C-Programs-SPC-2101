/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:30/10/2025
Description:open file for borrowed books
*/
#include <stdio.h>

int main()
{
	FILE *fptr;
	int transaction,total_sales=0;
	
	fptr=fopen("C:\\Users\\windows\\Desktop\\files\\sales.txt","r");
	
	while (fscanf(fptr, "%d", &transaction) == 1) {
        total_sales += transaction;
    }
	
	fclose(fptr);
	return 0;
}