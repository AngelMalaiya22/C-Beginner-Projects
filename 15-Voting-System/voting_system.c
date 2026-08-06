#include <stdio.h>
#include <string.h>

int main() {
    int votes[3] = {0, 0, 0};
    char candidate[30];
    int maxVotes, winner;

    printf("===== Voting System =====\n");

    while (1) {
        printf("\nCandidates:\n");
        printf("1. Alice\n");
        printf("2. Bob\n");
        printf("3. Charlie\n");
        printf("\nType 'result' to end voting.\n");

        printf("\nEnter candidate name: ");
        scanf(" %[^\n]", candidate);

        if (strcmp(candidate, "result") == 0) {
            break;
        }

        if (strcmp(candidate, "Alice") == 0 || strcmp(candidate, "alice") == 0) {
            votes[0]++;
            printf("Vote cast successfully!\n");
        }
        else if (strcmp(candidate, "Bob") == 0 || strcmp(candidate, "bob") == 0) {
            votes[1]++;
            printf("Vote cast successfully!\n");
        }
        else if (strcmp(candidate, "Charlie") == 0 || strcmp(candidate, "charlie") == 0) {
            votes[2]++;
            printf("Vote cast successfully!\n");
        }
        else {
            printf("Invalid candidate!\n");
        }
    }

    printf("\n===== Election Results =====\n");
    printf("Alice   : %d vote(s)\n", votes[0]);
    printf("Bob     : %d vote(s)\n", votes[1]);
    printf("Charlie : %d vote(s)\n", votes[2]);

    maxVotes = votes[0];
    winner = 0;

    for (int i = 1; i < 3; i++) {
        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            winner = i;
        }
    }

    printf("\nWinner: ");

    if (winner == 0)
        printf("Alice\n");
    else if (winner == 1)
        printf("Bob\n");
    else
        printf("Charlie\n");

    return 0;
}
