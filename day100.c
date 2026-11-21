// Q150: Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Account {
    int accNumber;
    char holder[50];
    double balance;
};

void deposit(struct Account *acc, double amount) {
    acc->balance += amount;
}

int main() {
    struct Account myAcc = { 1001, "Alice", 500.0 };
    struct Account *ptr = &myAcc;

    printf("Initial Account State:\nNumber: %d | Holder: %s | Balance: $%.2f\n",
           ptr->accNumber, ptr->holder, ptr->balance);

    deposit(ptr, 250.75);

    printf("\nAfter Deposit of $250.75:\nBalance: $%.2f\n", ptr->balance);
    return 0;
}
