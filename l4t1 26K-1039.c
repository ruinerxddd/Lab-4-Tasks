#include <stdio.h>
int main()
{
    int units;
    printf("Enter monthly electricity consumption: ");
    scanf("%d", &units);

    if(units > 500)
    {
        printf("Usage is too high! ");
    }
    else{
    printf("Usage is normal.");
    }
}
