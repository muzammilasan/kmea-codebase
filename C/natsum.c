#include <stdio.h>

int main() {
    int n, sum = 0 , i = 1;
    printf("Enter how many natural numbers: ");
    scanf("%d", &n);
    while(i<=n) {
        sum+=i;
        i++;
    }
    printf("Sum of the first %d natural numbers is %d\n", n, sum);
    return 0;
}