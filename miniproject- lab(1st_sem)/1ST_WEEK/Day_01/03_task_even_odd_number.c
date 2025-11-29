#include <stdio.h>

int main() {
    int num;

    printf("Enter a number:");
    scanf("%d", &num);

   if (num % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");


    if (num % 5 == 0)
        printf("Divisible by 5\n");
    else
        printf("Not Divisible by 5\n");

    return 0;
}