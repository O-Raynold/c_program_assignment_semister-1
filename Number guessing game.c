

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, secret, attempts = 0;

    // Generate random number between 1 and 20
    srand(time(0));
    secret = rand() % 20 + 1;

     do {
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret)
        printf("Too high!\n");
        else if (guess < secret)
        printf("Too low!\n");
        else
        printf("Congratulations!\n");

    } while (guess != secret);

    printf("You guessed it in %d attempts.\n", attempts);
    return 0;
}


