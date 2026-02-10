#include <stdio.h>

int main() {
    int num;

    // 1. Simple if
    printf("Enter a number (Simple if example): ");
    scanf("%d", &num);
    if (num > 0) {
        printf("Number is positive.\n");
    }

    // 2. if-else
    printf("\nEnter a number (if-else example): ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Number is even.\n");
    } else {
        printf("Number is odd.\n");
    }

    // 3. if-else if-else ladder
    printf("\nEnter your marks (0-100): ");
    scanf("%d", &num);
    if (num >= 90) {
        printf("Grade: A+\n");
    } else if (num >= 75) {
        printf("Grade: A\n");
    } else if (num >= 60) {
        printf("Grade: B\n");
    } else if (num >= 40) {
        printf("Grade: C\n");
    } else {
        printf("Fail\n");
    }

    // 4. Nested if
    int age;
    char citizen;
    printf("\nEnter your age: ");
    scanf("%d", &age);
    printf("Are you an Indian citizen? (y/n): ");
    scanf(" %c", &citizen);
    if (citizen == 'y' || citizen == 'Y') {
        if (age >= 18) {
            printf("You are eligible to vote.\n");
        } else {
            printf("You must be at least 18 years old to vote.\n");
        }
    } else {
        printf("You must be an Indian citizen to vote.\n");
    }

    // 5. switch-case
    int choice;
    printf("\nMenu:\n");
    printf("1. Check Even/Odd\n");
    printf("2. Find Square\n");
    printf("3. Exit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (num % 2 == 0)
                printf("%d is Even\n", num);
            else
                printf("%d is Odd\n", num);
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Square of %d = %d\n", num, num * num);
            break;

        case 3:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice! Please enter 1-3.\n");
            break;
    }

    return 0;
}
