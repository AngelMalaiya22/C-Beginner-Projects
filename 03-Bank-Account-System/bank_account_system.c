#include <stdio.h>
#include <string.h>

struct BankAccount {
    char name[50];
    float balance;
};

int main() {
    struct BankAccount account;
    int choice;
    float amount;

    printf("===== Bank Account System =====\n");

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", account.name);

    account.balance = 10000.0;

    while (1) {
        printf("\n===== Menu =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nAccount Holder: %s\n", account.name);
                printf("Current Balance: ?%.2f\n", account.balance);
                break;

            case 2:
                printf("Enter amount to deposit: ?");
                scanf("%f", &amount);

                if (amount > 0) {
                    account.balance += amount;
                    printf("?%.2f deposited successfully.\n", amount);
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ?");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Invalid amount!\n");
                } else if (amount > account.balance) {
                    printf("Insufficient balance!\n");
                } else {
                    account.balance -= amount;
                    printf("?%.2f withdrawn successfully.\n", amount);
                }
                break;

            case 4:
                printf("\nThank you for banking with us, %s!\n", account.name);
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
