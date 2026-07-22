#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int toss;
    char choice;

    srand(time(NULL));

    printf("===== Coin Toss Simulator =====\n");

    do {
        toss = rand() % 2;

        if (toss == 0)
            printf("\nResult: Heads\n");
        else
            printf("\nResult: Tails\n");

        printf("\nToss again? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nThanks for playing!\n");

    return 0;
}
