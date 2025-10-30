

//A programme to track weekly  revenue in a hotel
/*
Name; Raynold Ongaki
Reg ni. PA106/G/28820/25
Description ; weekly revenue tracker
*/
#include <stdio.h>

// Task 1: 1D Array - Weekly Revenue Tracker
int main() {
    int revenue[7];
    int total = 0;
    float average;

    printf("Enter daily revenue for 7 days:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7.0;
    printf("Total weekly revenue: %d\n", total);
    printf("Average daily revenue: %.2f\n", average);
    return 0;
}

