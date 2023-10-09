#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between -10000 and 10000
    int n = rand() % 20001 - 10000;

    // Get the last digit of n
    int lastDigit = abs(n) % 10;

    // Print the original number
    printf("Last digit of %d is %d ", n, lastDigit);

    // Check the last digit and print the appropriate message
    if (lastDigit > 5) {
        printf("and is greater than 5\n");
    } else if (lastDigit == 0) {
        printf("and is 0\n");
    } else {
        printf("and is less than 6 and not 0\n");
    }

    return 0;
}
