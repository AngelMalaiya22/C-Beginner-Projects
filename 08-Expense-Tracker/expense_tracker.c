#include <stdio.h>

#define MAX_EXPENSES 100

int main() {
    char expenseName[MAX_EXPENSES][50];
    float expenseAmount[MAX_EXPENSES];
    int count = 0;
    int choice, i;
    float total = 0;

    while (1) {
        printf("\n===== Expense Tracker =====\n");
        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Show Total Expense\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (count < MAX_EXPENSES) {
                    printf("Enter expense name: ");
                    scanf(" %[^\n]", expenseName[count]);

                    printf("Enter expense amount: ");
                    scanf("%f", &expenseAmount[count]);

                    count++;
                    printf("Expense added successfully!\n");
                } else {
                    printf("Expense limit reached!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No expenses recorded.\n");
                } else {
                    printf("\n----- Expense List -----\n");
                    for (i = 0; i < count; i++) {
                        printf("%d. %s - ?%.2f\n", i + 1, expenseName[i], expenseAmount[i]);
                    }
                }
                break;

            case 3:
                total = 0;

                for (i = 0; i < count; i++) {
                    total += expenseAmount[i];
                }

                printf("\nTotal Expense: ?%.2f\n", total);
                break;

            case 4:
                printf("Thank you for using Expense Tracker!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
