#include <stdio.h>
int main() 
{
    int choice;
    printf("Enter your choice from 1-5: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
        printf("Burger");
        break;
        case 2:
        printf("Pizza");
        break;
        case 3:
        printf("Biryani");
        break;
        case 4:
        printf("Sandwich");
        break;
        default:
        printf("Invalid Choice");
    }
}
