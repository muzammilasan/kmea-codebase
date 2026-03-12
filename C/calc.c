#include <stdio.h>

int main() {
    int n1, n2;
    char op;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("Enter the operator(+-*/): ");
    scanf(" %c", &op);
    switch (op) {
        case '+':
            printf("%d + %d = %d\n", n1, n2, n1+n2);
            break;
        case '-':
            printf("%d - %d = %d\n", n1, n2, n1-n2);
            break;
        case '*':
            printf("%d * %d = %d\n", n1, n2, n1*n2);
            break;
        case '/':
            printf("%d / %d = %d\n", n1, n2, n1/n2);
            break;
        default:
            printf("Invalid operator.\n");
    }
    return 0;
}