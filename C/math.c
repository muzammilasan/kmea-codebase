#include <stdio.h>
int main() {
    int num1;
    int num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the first number: ");
    scanf("%d", &num2);
    printf("Sum of %d and %d is %d\n", num1, num2, num1+num2);
    printf("Difference of %d and %d is %d\n", num1, num2, num1-num2);
    printf("Product of %d and %d is %d\n", num1, num2, num1*num2);
    printf("Quotient of %d and %d is %d\n", num1, num2, num1/num2);
    printf("Remainder of %d and %d is %d\n", num1, num2, num1%num2);
    return 0;
}