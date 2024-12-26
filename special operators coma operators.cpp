#include <stdio.h>

int main() {
    int a, b, c;

    // Comma operator in variable initialization and assignment
    a = (b = 5, c = 10); // b is assigned 5, then c is assigned 10, and finally a is assigned 10 (the rightmost value)
    printf("a: %d, b: %d, c: %d\n", a, b, c); // Output: a: 10, b: 5, c: 10

    int x = 0;
    int y = (x++, x + 10); // x is incremented to 1, then 1 + 10 = 11 is assigned to y
    printf("x: %d, y: %d\n", x, y); // Output: x: 1, y: 11
    
    int i, j;
    for (i = 0, j = 10; i < 5; i++, j--) {
        printf("i: %d, j: %d\n", i, j);
    }
    return 0;
}
