#include <stdio.h>
int main()
{
    int rating , years;
    printf("Enter Your Rating From 1-5: ");
    scanf("%d", &rating);
    printf("Enter Your Years Of Service: ");
    scanf("%d", &years);

    if (rating == 5 && years >= 3){
        printf("Excellent Bonus");}
    else if (rating == 4 && years >= 2){
        printf("Good Bonus");}
    else if (rating == 3 && years >= 1){
        printf("Basic Bonus");}
    else
        printf("No Bonus");
}