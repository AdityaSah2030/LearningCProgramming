// Bitwise Operators & Enum

#include <stdio.h>  // Standard I/O library

// Defining an enum for days of the week
enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    int a = 5, b = 3;  // Binary: 5 = 0101, 3 = 0011
    int result;

    // Bitwise AND
    result = a & b;  // 0101 & 0011 = 0001 (1)
    printf("Bitwise AND: %d & %d = %d\n", a, b, result);

    // Bitwise OR
    result = a | b;  // 0101 | 0011 = 0111 (7)
    printf("Bitwise OR: %d | %d = %d\n", a, b, result);

    // Bitwise XOR
    result = a ^ b;  // 0101 ^ 0011 = 0110 (6)
    printf("Bitwise XOR: %d ^ %d = %d\n", a, b, result);

    // Left Shift (multiply by 2)
    result = a << 1;  // 0101 << 1 = 1010 (10)
    printf("Left Shift: %d << 1 = %d\n", a, result);

    // Right Shift (divide by 2)
    result = a >> 1;  // 0101 >> 1 = 0010 (2)
    printf("Right Shift: %d >> 1 = %d\n", a, result);

    // Using enum
    enum Day today = WEDNESDAY;
    printf("\nToday is day number %d of the week.\n", today);

    return 0;  // Successful execution
}
