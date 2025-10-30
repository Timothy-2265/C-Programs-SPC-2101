/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:30/10/2025
Description:multiple branches
*/
#include <stdio.h>

int main() {
    int chain[3][5][10];
    int totalOccupied = 0;

    printf("=== Multiple Branches (3D Array) ===\n");
    printf("(Automatically assigning occupancy values...)\n\n");

    for (int branch = 0; branch < 3; branch++) {
        printf("--- Branch %d ---\n", branch + 1);
        for (int floor = 0; floor < 5; floor++) {
            int occupied = 0, vacant = 0;
            for (int room = 0; room < 10; room++) {
                
                chain[branch][floor][room] = (branch + floor + room) % 2;

                if (chain[branch][floor][room] == 1)
                    occupied++;
                else
                    vacant++;
            }
            printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
            totalOccupied += occupied;
        }
        printf("\n");
    }

    printf("Total occupied rooms across all branches: %d\n", totalOccupied);
    printf("Total vacant rooms: %d\n", (3 * 5 * 10) - totalOccupied);

    return 0;
}


