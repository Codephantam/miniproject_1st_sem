#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, gcd, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    // Find GCD using Euclidean algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // formula

    lcm = (num1 * num2) / gcd;

    
    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}