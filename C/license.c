#include <stdio.h>

int main() {
    int age;
    int hasLicense;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age>=18) {
        printf("Do you have a License? (1/0): ");
        scanf("%d", &hasLicense);
        if (hasLicense) {
            printf("You can drive\n");
        }
        else {
            printf("You can drive after getting a License\n");
        }
    }
    else {
        printf("You're not old enough to drive\n");
    }
}