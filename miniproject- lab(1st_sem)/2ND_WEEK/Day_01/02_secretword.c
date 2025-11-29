#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int i, length;
    int isPalindrome = 1; // Assume it's a palindrome

    // Input word
    printf("Enter a word: ");
    scanf("%s", word);

    length = strlen(word);

    // Check if palindrome
    for (i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Output result
    if (isPalindrome)
        printf("Perfect Secret Word\n");
    else
        printf("Not a Secret Word\n");

    return 0;
}