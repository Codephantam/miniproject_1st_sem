#include <stdio.h>

int main() {
    int n, i;
    int marks[100];
    int highest, lowest;

    // Input number of subjects
    printf("Enter number of subjects: ");
    scanf("%d", &n);

    // Input marks
    printf("Enter marks of %d subjects: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    // Initialize highest and lowest
    highest = marks[0];
    lowest = marks[0];

    // Find highest and lowest
    for (i = 1; i < n; i++) {
        if (marks[i] > highest)
            highest = marks[i];
        if (marks[i] < lowest)
            lowest = marks[i];
    }

    // Output result
    printf("Highest = %d\n", highest);
    printf("Lowest = %d\n", lowest);

    return 0;
}