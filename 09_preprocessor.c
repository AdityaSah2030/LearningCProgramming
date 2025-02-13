// Preprocessor Directives & Macros

#include <stdio.h>  // Standard I/O library

// Macro definition
#define PI 3.14159
#define SQUARE(x) ((x) * (x))  // Macro with argument

// Conditional Compilation
#define DEBUG  // Uncomment this to enable debugging

int main() {
    int radius = 5;
    float area;

    // Using a macro
    area = PI * SQUARE(radius);
    printf("Area of the circle with radius %d: %.2f\n", radius, area);

    // Conditional compilation
    #ifdef DEBUG
        printf("Debugging is enabled!\n");
    #endif

    #ifndef RELEASE
        printf("This is not a release version.\n");
    #endif

    return 0;  // Successful execution
}
