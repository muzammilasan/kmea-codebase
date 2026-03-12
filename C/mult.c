#include <stdio.h>

int main() {
    int n, x;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter how many multiples: ");
    scanf("%d",&x);
    for(int i =1; i <= x; i++) {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}