#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input the number
    printf("Enter an integer:");
    scanf("%d", &num);

    // Check if number is prime
    if (num <= 1) {
        isPrime = 0; 
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }

    // Output for prime check
    if (isPrime == 1)
        printf("Prime Number\n");
    else
        printf("Not Prime\n");

    // Check even or odd
    if (num % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");

    return 0;
}