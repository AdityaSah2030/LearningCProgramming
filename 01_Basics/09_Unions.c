// Understanding Unions vs Structures in C

#include <stdio.h>
#include <string.h>

// Define a Structure
struct StructData {
    int i;
    float f;
    char str[20];
};

// Define a Union
union UnionData {
    int i;
    float f;
    char str[20];
};

int main() {
    // Declare struct and union variables
    struct StructData structVar;
    union UnionData unionVar;

    // Assign values to struct
    structVar.i = 10;
    structVar.f = 20.5;
    strcpy(structVar.str, "Hello");

    // Assign values to union (only one can hold a value at a time)
    unionVar.i = 10;
    printf("Union - Integer: %d\n", unionVar.i);

    unionVar.f = 20.5;
    printf("Union - Float: %.2f\n", unionVar.f);

    strcpy(unionVar.str, "Hello");
    printf("Union - String: %s\n", unionVar.str);

    // Printing all values in struct
    printf("\nStructure stores all values separately:\n");
    printf("Struct - Integer: %d\n", structVar.i);
    printf("Struct - Float: %.2f\n", structVar.f);
    printf("Struct - String: %s\n", structVar.str);

    // Printing sizes of struct and union
    printf("\nSize of struct: %lu bytes\n", sizeof(struct StructData));
    printf("Size of union: %lu bytes\n", sizeof(union UnionData));

    return 0;
}


/*

1. Structs store all values separately, but unions share memory.
2. Using a union saves memory, but you can store only one value at a time.
3. If you need multiple values at once → use a struct.
4. If you need only one value at a time → use a union (memory efficient).

*/