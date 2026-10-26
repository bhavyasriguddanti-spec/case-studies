
#include <stdio.h>

void main()
{
    int option;
    float balance, amount;

    printf("Enter current balance: ");
    scanf("%f", &balance);

    printf("\n1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");

    printf("Enter your option: ");
    scanf("%d", &option);

    if (option == 1)
    {
        printf("Current balance = %.2f\n", balance);
    }
    else if (option == 2)
    {
        printf("Enter withdrawal amount: ");
        scanf("%f", &amount);

        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            printf("Transaction successful\n");
            printf("Remaining balance = %.2f\n", balance);
        }
        else
        {
            printf("Insufficient balance\n");
        }
    }
    else if (option == 3)
    {
        printf("Enter deposit amount: ");
        scanf("%f", &amount);

        if (amount > 0)
        {
            balance = balance + amount;
            printf("Deposit successful\n");
            printf("Updated balance = %.2f\n", balance);
        }
        else
        {
            printf("Invalid deposit amount\n");
        }
    }
    else
    {
        printf("Invalid option\n");
    }

}
