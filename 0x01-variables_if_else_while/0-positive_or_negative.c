#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    /* Seed the random number generator with the current time */
    srand((unsigned)time(NULL));

    /* Generate a random number and store it in the variable n */
    int n = rand();

    /* Print the random number */
    printf("The number is %d\n", n);

    /* Check if the number is positive, zero, or negative */
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}
