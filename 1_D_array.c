/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:30/10/2025
Description:One D array
*/

#include <stdio.h>

int main(){
    printf("---WEEKLY REVENUE---\n");
    int revenue[7], i, sum=0, average;
    
    for( i = 0; i<7; i++){
        printf("Enter revenue for day %d:",i+1);
        scanf("%d", &revenue[i]);
        sum +=revenue[i];
    }
    average= sum / 7;
    printf("\nThe total weekly revenue is %d\n", sum);
    printf("The average daily revenue is %d", average);
    
    return 0;
}
