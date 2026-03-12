#include <stdio.h>

int main() {
    int i = 1, count;
    printf("Enter the number: ");
    scanf("%d", &count);
    while(i<=count) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}