#include <stdio.h>
int main()
{
    int balance , amount;
    printf("Enter Your Balance: ");
    scanf("%d", &balance);
    printf("Enter Your Withdrawal Amount: ");
    scanf("%d", &amount);
    if(amount > 0 && amount <= balance)
    {
        printf("Withdrawal Approved! ");
    }
    else if(amount == 0)
    {
    printf("Enter A Valid Amount! ");
    }
    else 
    printf("Withdrawal Denied! ");
} 
