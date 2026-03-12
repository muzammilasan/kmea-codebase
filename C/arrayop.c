#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, sum = 0;
for(int i = 0; i < n; i++) {
    sum += arr[i];
    }
    printf("Sum is %d\n", sum);
    printf("Average is %d\n", sum/n);
    return 0;
}