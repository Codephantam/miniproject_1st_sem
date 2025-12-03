/* **Problem Title: ADTU Canteen Bill Analyzer
Story:

At Assam Down Town University (ADTU), the hostel canteen records the daily food expenses of each student.
Each row in a 2D array represents a student, and each column represents a day of the day week (from Monday to Friday).
The value bill[i][j] is the amount in ₹ spent by student i on day j.
You, as the Canteen Manager of ADTU, have been asked to analyze the weekly canteen records.

🧠 Your Tasks:

Given the 2D array bill, write a program to:

Print the total amount spent by each student in the week.

Find the day with the highest total collection.

Identify the student (or students) who spent the most overall.

Input Format:

The first line contains two integers:
n → number of students
m → number of days

The next n lines each contain m integers — the daily bill amounts.

📤 Output Format:

Print each student’s total weekly spending.

Print which day had the highest total collection.

Print which student(s) spent the most overall.
Input :
4 5
30 40 50 60 20
10 20 30 10 40
50 60 40 30 20
20 10 10 20 30

Output:

Student 1 total: ₹200  
Student 2 total: ₹110  
Student 3 total: ₹200  
Student 4 total: ₹90  

Highest collection on Day 2  
Highest spender: Student 1 and Student 3 */
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int bill[n][m];
    int student_total[n];
    int day_total[m];
    int i, j;

    // Initialize totals
    for (i = 0; i < n; i++) student_total[i] = 0;
    for (j = 0; j < m; j++) day_total[j] = 0;

    // Input bills
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &bill[i][j]);
            student_total[i] += bill[i][j];
            day_total[j] += bill[i][j];
        }
    }

    // Print total spent by each student
    for (i = 0; i < n; i++) {
        printf("Student %d total: ₹%d\n", i + 1, student_total[i]);
    }

    // Find day with highest collection
    int max_day = 0;
    for (j = 1; j < m; j++) {
        if (day_total[j] > day_total[max_day]) {
            max_day = j;
        }
    }

    printf("\nHighest collection on Day %d\n", max_day + 1);

    // Find highest spender(s)
    int max_spend = student_total[0];
    for (i = 1; i < n; i++) {
        if (student_total[i] > max_spend)
            max_spend = student_total[i];
    }

    printf("Highest spender: ");

    // Print all students with max spend
    int first = 1;
    for (i = 0; i < n; i++) {
        if (student_total[i] == max_spend) {
            if (!first) printf(" and ");  // formatting
            printf("Student %d", i + 1);
            first = 0;
        }
    }

    printf("\n");

    return 0;
}
