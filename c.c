#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[50];
    char input[50];
    int units;

    printf("Enter student name: ");
    scanf("%49s", name);

    while (1) {
        printf("Enter number of registered units: ");
        scanf("%49s", input);

        int valid = 1;
        for (int i = 0; i < strlen(input); i++) {
            if (!isdigit(input[i])) {
                valid = 0;
                break;
            }
        }

        if (valid) {
            units = atoi(input);
            break;
        } else {
            printf("Invalid input. Please enter a number.\n");
        }
    }

    char *status = (units > 7) ? "Overload - Approval Required" : "Registration Accepted";

    printf("\n--- Registration Summary ---\n");
    printf("Student: %s\n", name);
    printf("Units: %d\n", units);
    printf("Status: %s\n", status);

    return 0;
}