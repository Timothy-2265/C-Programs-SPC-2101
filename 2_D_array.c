/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:30/10/2025
Description:Two D array
*/

#include <stdio.h>

int main() {
    int occupancy[5][10];
    int occupied, vacant;

    printf("=== Room Occupancy (One Branch) ===\n");
    printf("(Automatically assigning occupancy values...)\n");

    for (int floor = 0; floor < 5; floor++) {
        occupied = vacant = 0;
        for (int room = 0; room < 10; room++) {
            
            occupancy[floor][room] = (floor + room) % 2;

            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}
    
