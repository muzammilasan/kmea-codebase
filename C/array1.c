#include <stdio.h>

int main() {
    int num[5] = {10, 20, 30, 40, 50};

    printf("First element: %d\n", num[0]);
    printf("Third element: %d\n", num[2]);

    num[1] = 25;

    for(int i = 0; i<5; i++) {
        printf("Element %d is %d\n", i, num[i]);
    }
    return 0;
}