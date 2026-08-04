#include <stdio.h>

int main() {
    int choice;
    float celsius, fahrenheit;

    printf("===== Temperature Converter =====\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);

            fahrenheit = (celsius * 9 / 5) + 32;

            printf("%.2f°C = %.2f°F\n", celsius, fahrenheit);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);

            celsius = (fahrenheit - 32) * 5 / 9;

            printf("%.2f°F = %.2f°C\n", fahrenheit, celsius);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
