#include <stdio.h>

int main() {
    int A[10][7];
    int i, j;
    int total_present[10] = {0};
    int total_day[7] = {0};
    int highest = 0, highest_student = 0;
    int lowest = 100, lowest_day = 0;

    
    printf("Enter attendance data (10x7 matrix):\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 7; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 7; j++) {
            total_present[i] += A[i][j];
        }
    }

    
    for (j = 0; j < 7; j++) {
        for (i = 0; i < 10; i++) {
            total_day[j] += A[i][j];
        }
    }

   
    for (i = 0; i < 10; i++) {
        if (total_present[i] > highest) {
            highest = total_present[i];
            highest_student = i + 1; 
        }
    }

    
    for (j = 0; j < 7; j++) {
        if (total_day[j] < lowest) {
            lowest = total_day[j];
            lowest_day = j + 1;  
        }
    }

    
    printf("\nWeekly Attendance Summary\n");
    printf("-------------------------\n\n");

    printf("Total Present Days:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, total_present[i]);
    }

    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n", highest_student, highest);
    printf("Day with Lowest Overall Attendance: Day %d\n", lowest_day);

    return 0;
}