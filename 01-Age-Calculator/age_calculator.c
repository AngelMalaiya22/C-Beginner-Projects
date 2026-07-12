#include <stdio.h>

int main() {
    int birthDay, birthMonth, birthYear;
    int currentDay, currentMonth, currentYear;
    int age;

    printf("===== Age Calculator =====\n");

    printf("Enter your Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);

    printf("Enter Today's Date (DD MM YYYY): ");
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);

    age = currentYear - birthYear;

    if (currentMonth < birthMonth || 
       (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }

    printf("\nYour age is %d years.\n", age);

    return 0;
}
