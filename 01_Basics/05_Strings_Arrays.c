#include <stdio.h>                    // Standard I/O functions
#include <string.h>                   // for string functions

int main() {

    char str1[50], str2[50], str3[50];      // ---------- STRING INPUT METHODS ----------

    printf("Enter a word (scanf): ");       // Using scanf (stops at space)
    scanf("%s", str1);
    printf("You entered: %s\n", str1);

    getchar();                              // consume leftover newline from previous input
    printf("\nEnter a sentence (gets): ");  // Using gets (deprecated - unsafe, but shown for learning)
    gets(str2);                             // avoids stopping at space, but unsafe
    printf("You entered: %s\n", str2);

    printf("\nEnter a sentence (fgets): "); // Using fgets (recommended)
    fgets(str3, sizeof(str3), stdin);
    str3[strcspn(str3, "\n")] = '\0';       // remove trailing newline from fgets
    printf("You entered: %s\n", str3);

    char s1[50] = "Hello";                  // ---------- STRING FUNCTIONS ----------
    char s2[50] = "World";

    printf("\nString Functions:\n");
    printf("Length of s1 = %zu\n", strlen(s1));

    strcpy(s2, s1);                         // copy s1 to s2
    printf("After strcpy, s2 = %s\n", s2);

    strcat(s1, " Everyone");                // concatenate
    printf("After strcat, s1 = %s\n", s1);

    printf("strcmp(\"Apple\",\"Banana\") = %d\n", strcmp("Apple", "Banana"));
    printf("strcmp(\"Apple\",\"Apple\")  = %d\n", strcmp("Apple", "Apple"));

    // Note: strupr, strlwr, strrev are compiler-specific (may not work on all compilers)
    // Uncomment if your compiler supports them
    // printf("strupr(s1) = %s\n", strupr(s1));
    // printf("strlwr(s1) = %s\n", strlwr(s1));
    // printf("strrev(s1) = %s\n", strrev(s1));

    int arr1D[5];                           // ---------- 1D ARRAY ----------
    printf("\nEnter 5 integers for 1D array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr1D[i]);
    }

    printf("1D Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1D[i]);
    }
    printf("\n");

    int arr2D[2][3];                        // ---------- 2D ARRAY ----------
    printf("\nEnter elements for 2x3 array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr2D[i][j]);
        }
    }

    printf("2D Array elements:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", arr2D[i][j]);
        }
        printf("\n");
    }

    return 0;
}
