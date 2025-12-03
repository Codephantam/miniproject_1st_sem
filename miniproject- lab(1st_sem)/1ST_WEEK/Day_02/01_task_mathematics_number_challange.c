/* Question 1: The Mathematician’s Number Challenge

Problem Story:
Riya, a young mathematician, loves playing with numbers. One day, she picks a number and wants to check two things:

Whether the number is prime or not.

Whether it is even or odd.
She wants your help to write a program that tells her both answers.
Task:
Write a program that takes an integer as input and:

Checks if it is a prime number or not.

Checks whether it is even or odd.

Input Format:
The first line contains one integer — the number to check.

Output Format:
Print two lines:
First line: "Prime Number" or "Not Prime"
Second line: "Even Number" or "Odd Number"


Example 1:
Input: 7
Output:
Prime Number
Odd Number

Example 2:
Input: 10
Output:
Not Prime
Even Number */
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
