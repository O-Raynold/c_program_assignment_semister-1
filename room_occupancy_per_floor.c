//a program to represent a room occupancy per floor 
/* 
name; Raynold Ongaki
reg number. PA106/G/28820/25
description. room occupancy per floor
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int occupancy[5][10];
    int occupied, vacant;

    srand(time(0));
    printf("\nRoom occupancy per floor (1 = occupied, 0 = vacant):\n");

    for (int floor = 0; floor < 5; floor++) {
        occupied = vacant = 0;
        printf("Floor %d: ", floor + 1);
        }
        for (int room = 0; room < 10; room++) {
            occupancy[5][10] = rand() % 2;
            printf("%d ", occupancy[5][10]);
            }
            if (occupancy[5][10] == 1){
                occupied++;
                }
            else
                vacant++;
         return 0;
       }