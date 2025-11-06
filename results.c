/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:30/10/2025
Description:open file for borrowed books
*/
#include <stdio.h>
struct Student {
    char name[50];
    char regNo[20];
    int marks;
};
int main()
{
	FILE *fptr;
	struct Student p;

	fptr=fopen("C:\\Users\\windows\\Desktop\\files\\results.dat","rb");
	
	printf("STUDENT'S RESULT\n :");
	printf("                      ");
	
	while (fread(&p, sizeof(struct Student), 1, fptr)) {
        printf("Name: %s\n", p.name);
        printf("Reg No: %s\n", p.regNo);
        printf("Marks: %d\n\n", p.marks);
    }
	fclose(fptr);
	
	return 0;
}