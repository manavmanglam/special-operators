#include <stdio.h>

int main() {
    int intVar;
    float floatVar;
    double doubleVar;
    char charVar;
    int intArray[10];

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of intVar: %zu bytes\n", sizeof(intVar));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of floatVar: %zu bytes\n", sizeof(floatVar));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of doubleVar: %zu bytes\n", sizeof(doubleVar));
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of charVar: %zu byte\n", sizeof(charVar));
    printf("Size of intArray[10]: %zu bytes\n", sizeof(intArray)); // Size of the entire array

    struct MyStruct {
        int a;
        char b;
        float c;
    };

    struct MyStruct myStructVar;
    printf("Size of struct MyStruct: %zu bytes\n", sizeof(struct MyStruct));
    printf("Size of myStructVar: %zu bytes\n", sizeof(myStructVar));

    return 0;
}
