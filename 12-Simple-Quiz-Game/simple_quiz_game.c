#include <stdio.h>
#include <string.h>

int main() {
    char answer[50];
    int score = 0;

    printf("===== Simple Quiz Game =====\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("Answer: ");
    scanf(" %[^\n]", answer);

    if (strcmp(answer, "New Delhi") == 0 || strcmp(answer, "new delhi") == 0) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is New Delhi.\n\n");
    }

    // Question 2
    printf("2. Which planet is known as the Red Planet?\n");
    printf("Answer: ");
    scanf(" %[^\n]", answer);

    if (strcmp(answer, "Mars") == 0 || strcmp(answer, "mars") == 0) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Mars.\n\n");
    }

    // Question 3
    printf("3. What is 12 x 8?\n");
    printf("Answer: ");
    scanf(" %[^\n]", answer);

    if (strcmp(answer, "96") == 0) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 96.\n\n");
    }

    // Question 4
    printf("4. Which programming language is known for its simplicity and readability?\n");
    printf("Answer: ");
    scanf(" %[^\n]", answer);

    if (strcmp(answer, "Python") == 0 || strcmp(answer, "python") == 0) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Python.\n\n");
    }

    // Question 5
    printf("5. How many days are there in a leap year?\n");
    printf("Answer: ");
    scanf(" %[^\n]", answer);

    if (strcmp(answer, "366") == 0) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 366.\n\n");
    }

    printf("===== Quiz Completed =====\n");
    printf("Your Final Score: %d/5\n", score);

    return 0;
}
