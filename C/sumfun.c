#include <stdio.h>

void psum(int a, int b) {
    int sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
}

int main() {
    psum(5,6);
    psum(4,8);
    return 0;
}