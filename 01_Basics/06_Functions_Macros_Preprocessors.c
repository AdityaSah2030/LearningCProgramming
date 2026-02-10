#include <stdio.h>

// ---------- MACROS ----------
// Constant macro
#define PI 3.14159

// Function-like macro
#define SQUARE(x) ((x) * (x))

// Conditional macro example
#define DEBUG 1

// ---------- ENUM ----------
// Enum for days of the week
enum Day { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

// ---------- FUNCTION DECLARATIONS ----------
void greet();                       // no return, no parameters
void printSum(int a, int b);         // no return, parameters
int multiply(int a, int b);          // return value, parameters
float areaOfCircle(float radius);    // return value, parameters
void printDay(enum Day d);           // enum parameter function

int main() {
    // ---------- USING FUNCTIONS ----------
    greet(); // call void function without parameters

    printSum(5, 7); // call void function with parameters

    int result = multiply(4, 6); // function with return
    printf("Multiplication result: %d\n", result);

    float r = 2.5;
    printf("Area of circle with radius %.2f = %.2f\n", r, areaOfCircle(r));

    // ---------- USING MACROS ----------
    printf("\nPI constant macro = %.5f\n", PI);
    printf("Square of 5 using macro = %d\n", SQUARE(5));

    // ---------- CONDITIONAL COMPILATION ----------
#ifdef DEBUG
    printf("\nDebug mode is ON\n");
#else
    printf("\nDebug mode is OFF\n");
#endif

#if (int)PI > 3
    printf("PI is greater than 3\n");
#else
    printf("PI is not greater than 3\n");
#endif

    // ---------- ENUM DEMONSTRATION ----------
    enum Day today = WEDNESDAY;
    printDay(today);

    return 0;
}

// ---------- FUNCTION DEFINITIONS ----------
void greet() {
    printf("Hello! Welcome to the Functions & Macros Demo.\n");
}

void printSum(int a, int b) {
    printf("Sum of %d and %d = %d\n", a, b, a + b);
}

int multiply(int a, int b) {
    return a * b;
}

float areaOfCircle(float radius) {
    return PI * radius * radius;
}

void printDay(enum Day d) {
    switch (d) {
        case MONDAY:    printf("It's Monday!\n"); break;
        case TUESDAY:   printf("It's Tuesday!\n"); break;
        case WEDNESDAY: printf("It's Wednesday!\n"); break;
        case THURSDAY:  printf("It's Thursday!\n"); break;
        case FRIDAY:    printf("It's Friday!\n"); break;
        case SATURDAY:  printf("It's Saturday!\n"); break;
        case SUNDAY:    printf("It's Sunday!\n"); break;
        default:        printf("Invalid day!\n"); break;
    }
}