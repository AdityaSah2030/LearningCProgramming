// Strings in C

#include <stdio.h>  // Standard I/O library
#include <string.h> // String handling functions

int main() {
        // String Example - Basic string operations
        char str1[100], str2[100];

        printf("\nEnter a string: ");
        getchar();  // Clearing buffer to avoid issues with gets()
        gets(str1);  // Taking a string as input
    
        printf("You entered: ");
        puts(str1);  // Printing the string
    
        // Finding string length
        printf("Length of the string: %lu\n", strlen(str1));
    
        // Copying one string to another
        strcpy(str2, str1);
        printf("Copied string: %s\n", str2);
        
        return 0;  // Successful execution
    }