#include <stdio.h>

int main() {
    // printf
    int a1 = 123456789;
    unsigned int b1 = 3000000000;
    
    printf("%d\n", a1); // 123456789   (O)
    printf("%d\n", b1); // -1294967296 (X)

    printf("%u\n", b1); // 3000000000  (O)
    printf("%u\n", a1); // 123456789   (?)

    float a2 = 123.45;
    double b2 = 123.45;

    printf("%f\n", a2); // 123.449997 (O)
    printf("%f\n", b2); // 123.450000 (O)

    printf("%d\n", a2); // 2147483637 (X)
    printf("%d\n", b2); // 2147483637 (X)

    return 0;
}