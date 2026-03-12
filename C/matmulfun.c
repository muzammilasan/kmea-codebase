#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int mul(int a, int b) {
    return a * b;
}

int main() {
    int sum = add(54,34);
    printf("Sum = %d\n", sum);
    int mult = mul(11,22);
    printf("Mult = %d\n", mult);
    return 0;
}