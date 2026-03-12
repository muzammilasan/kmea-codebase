#include <stdio.h>
#include <stdlib.h>

int main() {
    int balance = 1000;
    while(1) {
        int op;
        printf("Menu\n1. Deposit(1)\n2. Withdraw(2)\n3. Balance(3)\n4. Exit(4)\nEnter: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                int dep;
                printf("Enter the amount you want to deposit: ");
                scanf("%d", &dep);
                if (dep>=0) {
                    balance += dep;
                    printf("You have successfully added %d to your account.\n", dep);
                }
                else {
                    printf("You can't deposit negative money.\n");
                }
                break;
            case 2:
                int wit;
                printf("Enter the amount you want to withdraw: ");
                scanf("%d", &wit);
                if (wit<=balance) {
                    if (wit>0) {
                        balance -= wit;
                        printf("You hve successfully withdrawn %d from your account. \n", wit);
                    }
                    else {
                        printf("You can't wihdraw negative money.\n");
                    }
                }
                else {
                    printf("You don't have enough in your account.\n");
                }
                break;
            case 3:
                printf("You have %d in your account.\n", balance);
                break;
            case 4:
                printf("Thank you for using our services!\n");
                exit(1);
                break;
            default:
                printf("Invalid option. Please try again.");
        }
    }
    return 0;
}