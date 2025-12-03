/* Question Title: “The College Topper in Every Subject”

Story:
At Assam Down Town University, the results for the semester exams have just been announced.
The marks of 5 students in 3 subjects — Mathematics, Physics, and Computer Science — are stored in a 2D array.

Each row of the array represents one student, and each column represents one subject.
The class teacher wants to identify the highest marks in each subject so that those students can receive academic excellence awards.

Write a program that reads the marks of 5 students in 3 subjects and prints the highest marks in each subject.

Enter marks of 5 students in 3 subjects:

Student 1: 70 80 90
Student 2: 85 60 75
Student 3: 88 92 70
Student 4: 65 89 95
Student 5: 78 85 88

Highest marks in Mathematics: 88
Highest marks in Physics: 92
Highest marks in Computer Science: 95 */
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
