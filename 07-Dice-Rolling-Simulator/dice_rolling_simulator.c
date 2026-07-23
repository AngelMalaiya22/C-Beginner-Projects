#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dice;
    char choice;

    srand(time(NULL));

    printf("===== Dice Rolling Simulator =====\n");

    do {
        dice = rand() % 6 + 1;

        printf("\nYou rolled: %d\n", dice);

        printf("\nRoll again? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nThanks for playing!\n");

    return 0;
}
