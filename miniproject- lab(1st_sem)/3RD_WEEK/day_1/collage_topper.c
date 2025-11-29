#include <stdio.h>

int main() {
    int marks[5][3];
    int i, j;

    printf("Enter marks of 5 students in 3 subjects:\n");

    // Input marks for 5 students
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    int highest[3] = {0, 0, 0};

    // Find highest marks in each subject
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 5; i++) {
            if (marks[i][j] > highest[j]) {
                highest[j] = marks[i][j];
            }
        }
    }

    // Display results
    printf("\nHighest marks in Mathematics: %d\n", highest[0]);
    printf("Highest marks in Physics: %d\n", highest[1]);
    printf("Highest marks in Computer Science: %d\n", highest[2]);

    return 0;
}