#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_LENGTH 100

int main() {
    char tasks[MAX_TASKS][MAX_LENGTH];
    int taskCount = 0;
    int choice, taskNumber;

    while (1) {
        printf("\n===== To-Do List =====\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Remove Task\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {

            case 1:
                if (taskCount < MAX_TASKS) {
                    printf("Enter task: ");
                    fgets(tasks[taskCount], MAX_LENGTH, stdin);

                    tasks[taskCount][strcspn(tasks[taskCount], "\n")] = '\0';
                    taskCount++;

                    printf("Task added successfully!\n");
                } else {
                    printf("Task list is full!\n");
                }
                break;

            case 2:
                if (taskCount == 0) {
                    printf("No tasks available.\n");
                } else {
                    printf("\nYour Tasks:\n");
                    for (int i = 0; i < taskCount; i++) {
                        printf("%d. %s\n", i + 1, tasks[i]);
                    }
                }
                break;

            case 3:
                if (taskCount == 0) {
                    printf("No tasks to remove.\n");
                } else {
                    printf("\nYour Tasks:\n");
                    for (int i = 0; i < taskCount; i++) {
                        printf("%d. %s\n", i + 1, tasks[i]);
                    }

                    printf("Enter task number to remove: ");
                    scanf("%d", &taskNumber);

                    if (taskNumber >= 1 && taskNumber <= taskCount) {

                        for (int i = taskNumber - 1; i < taskCount - 1; i++) {
                            strcpy(tasks[i], tasks[i + 1]);
                        }

                        taskCount--;
                        printf("Task removed successfully!\n");
                    } else {
                        printf("Invalid task number!\n");
                    }
                }
                break;

            case 4:
                printf("Thank you for using the To-Do List!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
