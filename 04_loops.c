#include <stdio.h>

int main() {
    int i;

    // 1. for loop - print 1 to 5
    printf("For loop example (1 to 5):\n");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // 2. while loop - sum of numbers until user enters 0
    int num, sum = 0;
    printf("\nWhile loop example (sum until 0):\n");
    printf("Enter numbers (0 to stop):\n");
    scanf("%d", &num);
    while (num != 0) {
        sum += num;
        scanf("%d", &num);
    }
    printf("Sum = %d\n", sum);

    // 3. do-while loop - runs at least once
    int password;
    printf("\nDo-while loop example (password check):\n");
    do {
        printf("Enter password (1234 to unlock): ");
        scanf("%d", &password);
    } while (password != 1234);
    printf("Access granted!\n");

    // 4. Nested loops - multiplication table
    printf("\nNested loops example (multiplication table 1 to 3):\n");
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            printf("%d\t", row * col);
        }
        printf("\n");
    }

    // 5. break and continue
    printf("\nBreak and Continue example:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Breaking at i = %d\n", i);
            break; // stop loop completely
        }
        if (i % 2 == 0) {
            continue; // skip even numbers
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}