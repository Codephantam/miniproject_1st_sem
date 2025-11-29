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