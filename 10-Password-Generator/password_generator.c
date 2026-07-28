#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length, i;

    char characters[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "!@#$%^&*()_-+=<>?";

    int size = sizeof(characters) - 1;

    srand(time(NULL));

    printf("===== Password Generator =====\n");

    printf("Enter password length: ");
    scanf("%d", &length);

    if (length <= 0) {
        printf("Invalid password length!\n");
        return 0;
    }

    printf("\nGenerated Password: ");

    for (i = 0; i < length; i++) {
        printf("%c", characters[rand() % size]);
    }

    printf("\n");

    return 0;
}
